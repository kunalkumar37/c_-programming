#include<stdio.h>
void main()
{
    int a,f;
    int fact(int);
    printf("enter the number :\n");
    scanf("%d",&a);
    f=fact(a);
    printf("factorial=%d",f);
}
int fact(int x)
{
    int fact=1,i;
    for(i=x;i>=1;i--)
    fact=fact*i;
    return (fact);
}