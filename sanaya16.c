#include<stdio.h>
int main()
{
    int c;
    printf("enter the char you want !!\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1: printf("sunday");
                break;
        case 2: printf("tuesday");
                break;
            
        case 3: printf("monday");
                break;

        case 4: printf("wednesday");
                break;
        default: printf("day is not valid on this cahracter plaeaase input other than this");
                 break;
        
    }
return 0;
}