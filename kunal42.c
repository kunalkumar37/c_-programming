#include<stdio.h>
#include<math.h>
   
//#define MAX 5   it is taken because to make programm easy   
 
int main()
{
    int i,j,row;
    printf("Enter the no of row\n");
    scanf("%d",&row);
 
    for(i=0; i<row; i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}