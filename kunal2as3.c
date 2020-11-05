#include<stdio.h>
#include<math.h>
int main()
{
    int a,n,fact;
    printf("Enter the number you want\n");
    scanf("%d",&a);
    for(n=1;n<=a;n=n-1)
    fact=a*n;
    printf("factorial:%d\n",fact);
    return 0;
    
}