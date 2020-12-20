#include<stdio.h>
#include<string.h>
#include<stdlib.h>


#define DEBUG_INFO printf
#define LOG_OUT    printf

#define COLORBAR_NUM (8)
#define TRANSEVERSE 1
#define PORTRAIT 2

struct rgb_t
{
    unsigned char r;
    unsigned char g;
    unsigned char b;
};


struct yuv_t
{
    unsigned char y;
    unsigned char u;
    unsigned char v;
};



/*
*  ——————白———————黄————————青————————绿————————紫————————红————————蓝————————黑
* 0xFFFFFF     0xFFFF00  0x00FFFF  0x00FF00   0xFF00FF  0XFF0000  0x0000FF  0x000000
*/

int gcolor[COLORBAR_NUM] = 
{
    0xFFFFFF, 0xFFFF00, 0x00FFFF, 0x00FF00, 0xFF00FF, 0XFF0000, 0x0000FF, 0x000000
};

int user_help()
{
    LOG_OUT("%s width height\n");
}

int get_rgb_value(int rgb, struct rgb_t *prgb)
{
    prgb->r = (char)((rgb >> 16) & 0xFF);
    prgb->g = (char)((rgb >> 8) & 0xFF);
    prgb->b = (char)((rgb >> 0) & 0XFF);

    //DEBUG_INFO("rgb=%#x,R=%#2x, G=%#2x, B=%#2x\n", rgb, prgb->r, prgb->g, prgb->b);
    return 0;
}

int get_yuv_value(struct rgb_t rgb, struct yuv_t *pyuv)
{
    unsigned int y;
    unsigned int u;
    unsigned int v;

    y = 0.298 * rgb.r + 0.612 * rgb.g + 0.117 * rgb.b;
    u = -0.168 * rgb.r - 0.330 * rgb.g + 0.498 * rgb.b + 128;
    v = 0.449 * rgb.r - 0.435 * rgb.g - 0.083 * rgb.b + 128; 

    pyuv->y = y > 255 ? 255 : y; 
    pyuv->u = u > 255 ? 255 : u; 
    pyuv->v = v > 255 ? 255 : v; 

    DEBUG_INFO("y=%#x, u=%#x, v=%#x\n", pyuv->y, pyuv->u, pyuv->v);
    return 0;
}

int make_transeverse_colorbar_yvup422(unsigned char *buf, int width, int height)
{
    int i, j, k;
    unsigned char *y_buf;
    unsigned char *u_buf;
    unsigned char *v_buf;
    char  flag = 0;
    struct rgb_t rgb;
    struct yuv_t yuv;

    y_buf = buf;
    v_buf = buf + width * height;
    u_buf = v_buf + width * height/2;

    for(i = 0; i < COLORBAR_NUM; i++)
    {
        get_rgb_value(gcolor[i], &rgb);
        get_yuv_value(rgb, &yuv);
        
        memset(y_buf, yuv.y, height/COLORBAR_NUM*width);
        y_buf += height/COLORBAR_NUM*width;
        
        memset(v_buf, yuv.v, height/COLORBAR_NUM*width/2);
        v_buf += height/COLORBAR_NUM*width/2;
        memset(u_buf, yuv.u, height/COLORBAR_NUM*width/2);
        u_buf += height/COLORBAR_NUM*width/2;

    }

    return 0;
}

int make_portrait_colorbar_yvup422(unsigned char *buf, int width, int height)
{
    int i, j, k;
    unsigned char *y_buf;
    unsigned char *u_buf;
    unsigned char *v_buf;
    unsigned char *v_buf_temp;
    unsigned char *u_buf_temp;
    char  flag = 0;
    struct rgb_t rgb;
    struct yuv_t yuv;
    int size;

    y_buf = buf;
    v_buf = buf + width * height;
    u_buf = v_buf + width * height/2;
    v_buf_temp = v_buf;
    u_buf_temp = u_buf;

    size = width/COLORBAR_NUM;

    for(i = 0; i < COLORBAR_NUM; i++)
    {
        get_rgb_value(gcolor[i], &rgb);
        get_yuv_value(rgb, &yuv);
        
        memset(y_buf, yuv.y, size);
        y_buf += size;

        memset(v_buf, yuv.v, size);
        v_buf += size;

        memset(u_buf, yuv.u, size);
        u_buf += size;

    }

    for(j = 0; j < height-1; j++)
    {
        memcpy(y_buf, buf, width);
        y_buf += width;
    }

    for(j = 0; j < height/2-1; j++)
    {
        memcpy(v_buf, v_buf_temp, width);
        v_buf += width;
        memcpy(u_buf, u_buf_temp, width);
        u_buf += width;
    }

    return 0;
}


int make_colorbar(unsigned char *buf, int width, int height, int bar_type)
{   
    if(TRANSEVERSE == bar_type)
    {
        make_transeverse_colorbar_yvup422(buf, width, height);
    }
    else
    {
        make_portrait_colorbar_yvup422(buf, width, height);
    }
    

    return 0;
}

int main(int argc, char **argv)
{   
    int width;
    int height;
    int size;
    int len;
    int bar_type;
    unsigned char *buf;
    FILE *fp;

    if(argc < 2)
    {
        user_help();

        return -1;
    }

    width  = atoi(argv[1]);
    height = atoi(argv[2]);

    DEBUG_INFO("width=%d, height=%d\n", width, height);

    fp = fopen("colorbar.yuv", "wb+");
    
    if(fp)
    {
        size = width * height * 2;
        buf = (unsigned char *)malloc(size * sizeof(unsigned char));

        bar_type = PORTRAIT;        
        make_colorbar(buf, width, height, bar_type);
        len = fwrite(buf, 1, size, fp);
        if(len != size)
        {
            DEBUG_INFO("write failed\n");
        }
        free(buf);
        fclose(fp);
    }
    else
    {
        DEBUG_INFO("open file failed\n");
    }
    


    return 0;
}












