#include<stdio.h>
int main()
{
    int a;
    printf("Enter the no.of:\n");
    scanf("%d",&a);
    printf("Year you got is :%d\n",a/365);
    printf("Week you got :%d\n",a%7);
    return 0;
}