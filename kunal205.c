#include<stdio.h>
int main()
{
    union demo
    {
        int x;
        int y;

    };
    union demo a;
    a.x=100;
    printf("%d %d",a.x,a.y);

}