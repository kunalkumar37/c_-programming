#include<stdio.h>
int add(int *,int *);
int main()
{
    int a=5,b=6;
    int z=add(&a,&b);
    printf("%d",z);
    return 0;

}
int add(int *p,int *q)
{
    return(*p+*q);
     
}