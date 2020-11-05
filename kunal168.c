#include<stdio.h>
int sum(int,int);
void main()
{
    int a=5,b=6;
    int s=sum(a,b);
    printf("sum=%d",s);

}
int sum(int x,int y)
{
    return(x+y);
}