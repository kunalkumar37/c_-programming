#include<stdio.h>
int main()
{
    int a,num;
    printf("enter the number you want:\n");
    scanf("%d",&num);
    for(a=1;a<=num;a++)
    
    if(num%a==0)
    printf("prime number\n");
    else
    {
     printf("not prime number ");
    }
    
    return 0;
    
}