#include<stdio.h>
#include<math.h>
int main()
{
    int x,sum,n;
    printf("the exponential function e to the power x\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i=i+1)
        sum= sum+1+x/i;
        printf("the result%d\n",sum);
    return 0;

}