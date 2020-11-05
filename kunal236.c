//abudant number ex 12--->1,2,3,4,6
//if the sum of all factors is greater than 12 then abudant number
#include<stdio.h>
int main()
{
    int i,k;
    printf("enter the number for factorial:\n");
    scanf("%d",&i);
    for(int j=1;j<=i;j++)
    {
    k=i/j;
    
    if(k==0)
    printf("%d is the factorial:\n",k);
    }
    
    return 0;

}