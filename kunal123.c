#include<stdio.h>
void main()
{
    int arr[10],i,sum=0;
    float av;
    printf("enter the elements:\n");
    for(i=0;i<10;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<10;i++)
    sum=sum+arr[i];
    printf("sum=%d",sum);



}