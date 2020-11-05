//three greater number
#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    printf("enter the three number you want:\n");
    scanf("%d\n%d\n%d\n",&a,&b,&c);
    if((a>=b)&&(a>=c))
    
        printf("a is greater number:\n",a);

    
     if((b>=a)&&(b>=c))
    
       printf("b is greater number:\n",b); /* code */
    
     if((c>=a)&&(c>=b))
    
        printf("c is greater number:\n",c);
    
    return 0;
}