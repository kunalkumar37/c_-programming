#include<stdio.h>
int main()
{
    int i,j,k,l;
    printf("enter the number you want:\n");
    scanf("%d",&i);
    j=i*i;
    printf("the square of number %d:\n",j);
    k=j%10;
    l=i%10;
    if(k==l)
    printf("automorphic\n");
    else
    {
        printf("not");
    }
    
}
