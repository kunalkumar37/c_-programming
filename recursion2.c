#include<stdio.h>
int factorial(int);
int main()
{
    int i,fact;
    printf("enter the number you want:");
    scanf("%d",&i);
    //int fact;
fact=factorial(i);
printf("factorial:%d",fact);
return 0;

}
int factorial(int x)
{
    int b;
    if(x==1)
    return (1);
    else
    
        b=x*(x-1);

    
    return(b);
    
}