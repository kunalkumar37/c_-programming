//strong number
#include<stdio.h>
int main()
{
    int a,i,fact=1,temp,b,sum=0;
    printf("Enter the number you want:  ");
    scanf("%d",&a);
    temp=a;
    while(a>0)
    {
 
     b=a%10;
    for( i = b; i >= 1; i=i-1)
    {
     fact=fact*i;
    }
    sum=sum+fact;
    a=a/10;
    }
    a=temp;
    if(a==sum)
    printf("strong number");
    else
    printf("not strong number");
    return 0;


     
    
}