#include<stdio.h>
int main()
{
    int i=20,j=30;
    swap(&i,&j)
    printf("%d %d",i,j);
    return 0;
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    
}