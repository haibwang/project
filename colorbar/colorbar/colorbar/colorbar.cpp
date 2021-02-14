
#include "colorbar.h"
#include <memory.h>
#include <iostream>
#include <cstdio>

#define COLORBAR_NUM (8)

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
*  ！！！！！！易！！！！！！！仔！！！！！！！！楳！！！！！！！！駄！！！！！！！！從！！！！！！！！碕！！！！！！！！清！！！！！！！！菜
* 0xFFFFFF     0xFFFF00  0x00FFFF  0x00FF00   0xFF00FF  0XFF0000  0x0000FF  0x000000
*/

int gcolor[COLORBAR_NUM] =
{
    0xFFFFFF, 0xFFFF00, 0x00FFFF, 0x00FF00, 0xFF00FF, 0XFF0000, 0x0000FF, 0x000000
};


int get_rgb_value(int rgb, struct rgb_t* prgb)
{
    prgb->r = (char)((rgb >> 16) & 0xFF);
    prgb->g = (char)((rgb >> 8) & 0xFF);
    prgb->b = (char)((rgb >> 0) & 0XFF);

    return 0;
}

int get_yuv_value(struct rgb_t rgb, struct yuv_t* pyuv)
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

    printf("y=%#x, u=%#x, v=%#x\n", pyuv->y, pyuv->u, pyuv->v);

    return 0;
}

int make_transeverse_colorbar_yvyu422(unsigned char* buf, int width, int height)
{
    int i, j, k;
    unsigned char* y_buf;
    unsigned char* u_buf;
    unsigned char* v_buf;
    char  flag = 0;
    struct rgb_t rgb;
    struct yuv_t yuv;

    y_buf = buf;
    v_buf = y_buf + 1;
    u_buf = v_buf + 2;

    for (i = 0; i < COLORBAR_NUM; i++)
    {
        size_t size = height / COLORBAR_NUM * width;

        get_rgb_value(gcolor[i], &rgb);
        get_yuv_value(rgb, &yuv);

        k = 0;
        for (j = 0; j < size; j++)
        {
            *y_buf = yuv.y;
            y_buf += 2;

            if (0 == k)
            {
                *v_buf = yuv.v;
                v_buf += 4;
                k = 1;
            }
            else
            {
                *u_buf = yuv.u;
                u_buf += 4;
                k = 0;
            }
        }
    }

    return 0;
}


int file_write(const char* path, unsigned char *buf, size_t size)
{
    FILE* fp= NULL;

    fopen_s(&fp, path, "wb");
    if (fp)
    {
        fwrite(buf, size, 1, fp);
        fclose(fp);
        return 0;
    }

    std::cout << "open file " << path << "failed" << std::endl;

    return -1;
}

colorbar::colorbar(int w, int h, int f)
{
    this->width = w;
    this->height = h;
    this->format = (PIC_FORMAT)f;
    this->data = new unsigned char[w*h*2];

    std::cout << "更夛: w = "<<this->width<< " h = "<< this->height << std::endl;

}

colorbar::~colorbar()
{
    delete[] this->data;
    std::cout << "裂更" << std::endl;
}


int colorbar::generate_colorbar(const char *path)
{
    int status;

    if (YUV422_YVYU == this->format)
    {
        status = make_transeverse_colorbar_yvyu422(this->data, this->width, this->height);
        if (0 == status)
        {
            status = file_write(path, this->data, this->width * this->height * 2);
        }
    }
    else
    {
        std::cout << "cant process this format:" << this->format << std::endl;
        status = -1;
    }

    return status;
}



