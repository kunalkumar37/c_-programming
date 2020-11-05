//reverse number
#include<stdio.h>
int main()
{
    int a,r=0,p;
    printf("enter the number you want:");
    scanf("%d",&a);
    while(a>=1)
    {
        p=a%10;
        r=r*10+p;
        a=a/10;

    }
    printf("the reverse=%d",r);
    return 0;

}