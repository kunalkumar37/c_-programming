#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("enter any number:\n");
    scanf("%d",&n);
    printf("1");
    for(i=2;i<=n-1;i++)
    printf("1/%d\n",i);
    for(i=1;i<=n;i++)
    sum=sum+i;
    printf("1/%d\n",n);
    printf("sum=1/%d",sum
    +1/n);
}