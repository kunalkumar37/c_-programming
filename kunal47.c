#include<stdio.h>
int main()
{
    int a,fact=1,i;
    printf("Enter the number you want: ");
    scanf("%d",&a);
    for(i=a;i>=1;i=i-1)
    
        fact=fact*i;
        printf("The factorial of number: %d",fact);

    
    return 0;
}