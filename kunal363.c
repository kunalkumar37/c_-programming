#include<stdio.h>
typedef struct 
{
    int x;int y;
} Point;

typedef struct
{
    point TL;
    point BR;

    /* data */
} Rect;
int main()
{
    Rect r={{0,2},{5,7}};
    printf("[(%d %d) (%d %d)]",r.TL.x,r.TL.y,r.BR.x,r.BR.y);
    return 0;
}
