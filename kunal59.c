#include<stdio.h>
int main()
{
    int arr[5],i;
    for(i=0;i<5;i++)
    {
        printf("enter the valuearr[%d]:\n",i);
        scanf("%d",&arr[i]);

    }
    printf("the array elements are:\n");
    for(i=0;i,5;i++)
    {
        printf("%d\t",arr[i]);

    }
    return 0;
}