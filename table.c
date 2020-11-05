#include<stdio.h>
int main()
{
    int n,t,i;
    printf("enter the number you want for table:::\n");
    scanf("%d",&n);
    printf("for table::\n");
    for(i=1;i<=20;i++)
    {
    t=i*n;
    printf("%d\n",t);
    }
    //printf("%d\n",t);
    return 0;
}