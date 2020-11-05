#include<stdio.h>
void main()
{
    int a,b , temp;
    printf("enter a first number to swap");
    scanf("%d",&a);
    printf("enter a second number to swap");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;

    printf("the result of swap of a and b %d\n,%d\n",a,b);
}