#include<stdio.h>
void fun(int,int);
main()
{int a=10,b=20;
fun(a,b);
printf("%d\t%d",a,b);
       }
       void fun(int a,int b)
       {
           int c;c=a;a=b;b=c;
       }
