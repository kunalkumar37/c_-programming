#include<stdio.h>
int main()
{
    const int x=5;
    const int *p;
    p=&x;
    printf("x=%d",x);
   // (*p)++;
   x++;
    printf("x=%d",x);
    return 0;
}