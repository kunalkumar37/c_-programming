#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][2],b[3][2],i,j;
    printf("enter the elements of a matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        scanf("%d",&a[3][2]);
    }
    printf("enter the elements of b matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        scanf("%d",&b[3][2]);

    }
    printf("the matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        printf("%d",a[i][j]);

    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
       printf("%d",b[i][j]);
    }
    printf("\n");
    return 0;
}