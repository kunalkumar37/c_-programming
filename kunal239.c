#include<stdio.h>
int multiply(int ,int);
void main()
{
    int a=5,b=6;
    int m=multiply(a,b);
    printf("multiply is %d",m);

}
int multiply(int x,int y)
{
    return (x*y);
    
}
