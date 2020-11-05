#include<stdio.h>
int main()
{
    int n,s,i,t,sum=0;
    printf("Enter the number you want upto odd:::!!");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        
        printf("%d\n",i);
        for(t=i;t<=n*n;t=i*i)
        {
        printf("%d\n",t);
        }
    }
    
    sum=sum+t;
        printf("%d",sum);

    

    return 0;
}