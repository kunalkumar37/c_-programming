#include<stdio.h>
int add(int ,int ,int);

void main()
{
    int arr[3][3];
    int i,j,a;
    printf("enter the array elements:\n");
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        scanf("%d",arr[3][3]);

    }
    a=add(arr[1][1],arr[2][2],arr[3][3]);
    printf("add is %d",a);
    
    //printf("the matrix:%d",arr);

}
int add(int x,int y,int z)
{
    return (x+y+z);
}

