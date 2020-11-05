#include<stdio.h>
#include<math.h>
int main()
{
    int a=0,b=1,c,i;
    printf("Enter the number you want\n");
    scanf("%d",&a);
    for(i=2;i<=20;i++)
    {
        c=a+b;
        printf("%d",c);
    }
    a=b;
    b=c;
    return 0;

     
}