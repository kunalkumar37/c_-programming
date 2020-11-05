#include<stdio.h>
void swap(int x ,int y);
int main()
{
    int a=10,b=20;
    swap(a,b);
  // printf("swapping %d\n%d",a,b);
   return 0;

}
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
 printf("%d %d",x,y);
   // return (x,y);
}