#include<stdio.h>
unsigned long factorial(int n)
{
    unsigned long fact =1;
    int i;
    for(i=1;i<=n;i++)
    fact=fact*i;
    return fact;

}
int main()
{
    int n=5;
    printf("%lu",factorial(n));
    return 0;

}