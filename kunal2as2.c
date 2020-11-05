#include<stdio.h>
#include<math.h>
int man()
{
    int a,b;
    printf("Enter the number you want \n");
    scanf("%d%d",a,b);
    a=a+b;
    b=a-20;
    a=a-10;
    printf("The swap:%d%d\n",a,b);
    return 0;
}