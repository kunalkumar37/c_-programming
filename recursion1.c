#include<stdio.h>
int factorial(int);
int main()
{
    int i,fact;
    printf("enter the number");
scanf("%d",&i);
fact=factorial(i);
printf("%d",fact);
return 0;

}
int factorial(int x)
{
    int f=1,i;
    for(i=x;i>=1;i--)
    f=f*i;
    return (f);
}