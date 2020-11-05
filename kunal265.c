#include<stdio.h>
int main()
{
    int sum=0;
    int p,s,i;

    int arr[1000];
    printf("enter the size of array\n");
    scanf("%d",&i);
    printf("enter the elements\n");
    for(s=0;s<i;s++)
    {
        scanf("%d",&arr[s]);
    }
   for(s=0;s<i;s++)
    {
    sum=sum+arr[s];
    }
    printf("the sum of array%d\n",sum);
    return 0;

}