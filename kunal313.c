#include<stdio.h>
int main()
{
    int i,num;
    printf("enter the number ");
    scanf("%d",&num);
    i=2;
    while(i<=num-1)
    {
        if(num%i==0)
        printf("the number is not prime");
        break;
    }
    i++;
    if(i==num)
    {

    printf("prime number");
}
    return 0;
}