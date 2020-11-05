#include<stdio.h>
//#include<iostream.h>
int sum(int ,int );
void main()
{
int a=5,b=6;
int s=sum(a,b);
printf("%d sum is:",s);

}
int sum(int x,int y)
{
    return(x+y);
}