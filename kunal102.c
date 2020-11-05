//
#include<stdio.h>
#include<conio.h>
void main()
{
    void table();
    table();

}
void table()
{
    int n,i,t;
    printf("Enetr the number you want to get table:\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
    t=n*i;
    
    printf("%d*%d=%d\n",n,i,t);
    }
}


