#include<stdio.h>
int main()
{
    int row ,col,i,j;

    printf("Enetr the number of row :\n");
    scanf("%d",&row);
    printf("enetr the number of column :\n");
    scanf("%d",&col);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            if(j<=i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}