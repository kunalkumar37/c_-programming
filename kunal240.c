#include<stdio.h>
int divide(int ,int);
int  main()
{
    int a=10,b=2;
    int d=divide(a,b);
    printf("divide is %d:",d);
    return 0;

}
int divide(int x,int y)
{
    return (x/y);

}