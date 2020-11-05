#include<stdio.h>
int main()
{
    int a[3][2],b[3][2],c[3][2],i,j;
    printf("enter the elements of 1 matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        scanf("%d",a[3][2]);

    }
    printf("enter the elements of 2 matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        scanf("%d",b[3][2]);

    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
            c[i][j]=a[3][2]+b[3][2];


    }
//    c[i][j]=a[3][2]+b[3][2];
    printf("the sum of matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
printf("the sum=%d",c[i][j]);
printf("\n");
    }
    return 0;
}