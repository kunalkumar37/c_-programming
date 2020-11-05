//armstrong number
#include<stdio.h>
int main()
{
    int a,b,sum=0,temp;
    printf("Enter the number you want: ");
    scanf("%d",&a);
    temp=a;
    while(a>0)
    {
        b=a%10;
        sum=sum+b*b*b;
        a=a/10;
    }
    a=temp;
    if(a==sum)
    printf("armstrong number");
    else
    printf(" not armstrong number");
    return 0;

}