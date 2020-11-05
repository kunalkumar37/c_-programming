#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter three integer numbers\n");
    scanf("%7d %*d %4d",&a,&b,&c);
    printf("%d\n%d\n%d\n",a,b,c);
}