#include<stdio.h>
int main()
{
    int a,s;
    int sqr(int);
    printf("enter the number you want:\n");
    scanf("%d",&a);
    s=sqr(a);
    printf("the square of a number:%d\n",s);


}
int sqr(int x)
{
    return (x*x);
}
