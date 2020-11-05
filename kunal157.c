#include<stdio.h>
int main()
{
    int r1,r2;
    r1=add(10,20);
    r2=multiply(2,3,4);
    printf("%d\n%d\t",r1,r2);


}
int add(int x,int y)
{
    int z=x+y;
    return z;

}
int multiply(int x,int y,int z)
{
    int w=x*y*z;
    return w;
}