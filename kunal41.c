#include<stdio.h>
#include<math.h>
int main()
{
    int row,col,i;
    printf("Enter the row you want\n");
    scanf("%d",&row);
    printf("Enter the no of column you want\n");
    scanf("%d",&col);
    for(i=0;i<=row;i=i+1)
    {
        for(i=0;i<=col;i=i+1)
        {
            printf("*");

        }
        printf("\n");
    }
    return 0;
}