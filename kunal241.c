#include<stdio.h>
int quotient(int ,int);
int main()
{
    int a,b;
    printf("enter the number you want :\n");
    scanf("%d %d",&a,&b);
    int q=quotient(a,b);
    printf("quotient is %d:",q);
    return 0;
}
int quotient(int x,int y)
{
    return(x%y);
    
}