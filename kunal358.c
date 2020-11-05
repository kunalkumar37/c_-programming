#include<stdio.h>
int f(int);
int main()
{
    int n,m=0,i;
    printf("enter the total numbers:n");
    scanf("%d\n",&n);
    printf("fibonnaci series terms");
    for(i=1;i<=n;i++)
    {
        printf("%d",f(m));
        m++;

    }

return 0;
}
int f(int x)
{
    if(x==0||x==1)
    return(x);
    else
    {
        return(f(x=1)+f(x-2));

    }
    
}
