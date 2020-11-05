#include<stdio.h>
void main()
{
    int a,b;
    int *p,*q;
    p=&a;
    q=&b;
     int t=p-q;
    printf("%d",t);
}