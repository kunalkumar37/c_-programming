#include<stdio.h>
void main()
{
    static int a[]={20,30,105,82,97,72,66,102};
    int*p,*p1;
    p=&a[1];
    p1=&a[6];
    printf("%d\n",*p1-*p);
    printf("%d\n",p1-p);
}