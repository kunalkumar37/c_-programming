//using recursion to find factorial
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
    if(n<0)
    printf("invalid");
    else
    {
        printf("%d!=%d",n,fact(n));

    }
    
}
int fact(int n)
{
    
    if(n==0)
   // printf("1");
   return 1;
    else
    {
        //printf("%d",x*fact(x-1));
        return(n*fact(n-1));
    }
    
}