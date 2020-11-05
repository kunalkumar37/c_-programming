#include<stdio.h>
int main()
{
    int r,c,sum;
    for(r=1;r<=10;r=r+1)
    {
        for(c=1;c<=10;c=c+1)
         sum=r+c;
        printf("%d\n %d %d",sum,r,c);

    }
}