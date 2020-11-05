#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("enter the number you want:\n ");

    scanf("%d\n%d\n%d",&a,&b,&c);
    d=a*a;
    e=b*b;
    f=c*c;
    if(d=e+f)
    printf("this number follows the pythagoreas theroem:\n");
    else
    {
        printf("not");

    }
    
    if(e=d+f)
     printf("this number follows the pythagoreas theroem:\n");
     else
     {
         printf("not");
     }
     
    if(f=e+d)
    printf("this number follows the pythagoreas theroem:\n");
else 
printf("not");


}