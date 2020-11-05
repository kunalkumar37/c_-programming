#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the number you want:\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d\n%d\n",a,b);
    return 0;
}
