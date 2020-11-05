#include<stdio.h>
int main(void)
{
    int n;
    printf("enter the number u want");
    scanf("%d",&n);
    if(n>=10||n<=90)
    {

    return(n);
    }
    else
    {
        return (n+9);
    }
    
}