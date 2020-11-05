#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the x and y value:\n");
    scanf("%d %d",&x,&y);
    if(x==0&&y==0)
    printf("origin");
    else
    {
        if(x>0&&y==0)
        printf("x axis ");
        else
        {
            if(x==0&&y>0)
            printf("y axis");
            else
            {
                if(x>0||y>0)
                printf("at some point between x and y axis");

            }
            
        }
        
    }
 return 0;   
}