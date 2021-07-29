#include <stdio.h>

#define DEBUG printf
int times = 0;
int troom = 0;
int p[1000];
int pnum = 0;
int rt[1000] = { 0 };
int cc = 1;

int findmaxlt(int a)
{
    for (int i = pnum - 1; i >= 0; i--)
    {
        if (p[i] <= a)
        {
            return p[i];
        }
    }

    return 0;
}

int nextroom(int c)
{
    int p = 0;

    if (rt[c] % 2 == 0)
    {
        c = c + 1;
    }
    else
    {
        p = findmaxlt(c);
        //DEBUG("%d,",p);
        c = p;
    }

    return c;
}

int process(int c, int n)
{
    rt[1] = 1;

    while (c < n)
    {
        times++;
        c = nextroom(c);
        rt[c]++;

        DEBUG("%d,",  c);
    }

    return 0;
}

void input(void)
{
    scanf_s("%d", &troom);

    while (EOF != scanf_s("%d", &p[pnum]))
    {
        pnum++;
    }
}

void output(void)
{
    printf("%d", times % 1000000007);
}

int main()
{
    input();
    process(1, troom + 1);
    output();

    return 0;
}