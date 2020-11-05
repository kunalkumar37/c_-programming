#include<stdio.h>
int main()
{
    int big,a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    big=((a>b)?(a>c?a:'!'):(b>c)?b:c);
    printf("big = %d",big);
    return 0;
}