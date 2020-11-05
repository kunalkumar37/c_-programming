#include<stdio.h>
int main()
{
    float a=13.5;
    float*b,*c;
    b=&a;
    c=b;
    printf("%u\n",&a);
    printf("%f\n",*b);
    return 0;











}