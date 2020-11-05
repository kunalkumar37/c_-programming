#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,n;
    printf("Enter the number you want within 50");
    scanf("%d\n%d\n",&a,&b);
    for (n=1;n<=50;n=n+1)
    {
    c=(a&&b)/n;
    printf("The result %d\n",c);
    }
    


}