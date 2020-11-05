#include<stdio.h>
int main()
{
    int i=0,n;
    //long long n;
    printf("enter the number you want:\n");
    scanf("%d",&n);
    while(n!=0){

    
    //n/=10;
    n=n/10;
    ++i;
    }
    printf("the no of digits:%d",i);
    


}
