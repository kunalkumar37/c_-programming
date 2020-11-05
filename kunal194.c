#include<stdio.h>
int main()
{
    struct pens
    {
        int color;

    }p1[2];
    struct pens p2[3];
    p1[0].color=5;
    p1[1].color=9;
    printf("%d",p1[0].color);
        printf("%d",p1[1].color);
        return 0;

}