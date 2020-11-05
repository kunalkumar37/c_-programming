#include<stdio.h>
int main()
{
    int arr[10],i,sum=0;
    for(i=0;i<=9;i++)
    {
       printf("enter the %d elements\n",i);
       scanf("%d",&arr[i]);

    }
    for(i=0;i<=9;i++)
    {
        sum=sum+arr[i];
    }
    printf("the sum of 10 array elements is %d",sum);

}