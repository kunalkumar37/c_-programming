#include<stdio.h>
#include<math.h>
int main()
{
    int rows,i,space,b=0;
    printf("Enter the no you want\n");
    scanf("%d",&rows);
    for(i=1;i<=rows;i=i+1,b=0)
    {
        for(space=1;space<=rows-i;space=space+1)
        {
            printf(" ");
        }
        while(b!=2*i-1)
        //for(;b=2*i-1;b=b+1)
        {
        printf("*");
        b=b+1;
        }
        printf("\n");
    }
    return 0;
    
}