#include<stdio.h>
int main()
{
    int s,i,n;
    printf("enter the number you want!!!!!!\n");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        printf("%d\n",i);
        printf("%d\n",i*i);

    }
    printf("the sum of all odd upto given number of n\n");
    printf("%d",(n*(2*n+1)*(2*n-1))/3);
    return 0;
}