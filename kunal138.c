#include<stdio.h>
void main()
{
    int
    x=20,y=35;
     x=y++ + x++;
    y=++y + ++x;
    printf("%d\n%d\n",x,y);

}