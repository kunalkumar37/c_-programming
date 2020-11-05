#include<stdio.h>
int main(void)
{
    int i,k,flag=1;
    int r;
    printf("enter the number of rows and columns:\n");
    scanf("%d\n",&r);
    for(i=1,k=0;i<=2*r-1;i++)
    {
        if(i<r-k)
        printf(" ");
        else
        {
        if(flag)
        printf("*");
        else
        {
            printf(" ");
            flag=1-flag;
        }
        
        }
        
if(i==r+k)
{
    k++;
    printf("\n");
    if(i==2*r-1)
    break;
    i=0;
flag=1;
}


    }
}