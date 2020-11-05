#include<stdio.h>
void  main()
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
            if(j<=row-i)
            printf("*");
            else
            
                printf(" ");
            
            

        }
        printf("\n");
    }
}
