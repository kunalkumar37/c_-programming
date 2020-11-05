
// write a program to enter marrks of three subjects .find out the percentage if %>90 then disply grade a+,%>80and <=90 then display grade A,%>70and <=80 then display gradeb
#include<stdio.h>
void main()
{
    int a;
    printf("percentage you got\n");
    scanf("%d",&a);
    if(a>90);
    {
    printf("your grade is A+");
    }
    else
    {
        if(a<90&&a>=80);
        {
            printf("your grade is A\n");
        }
        else
        {
            if(a<80&&a>=70);
            {
                printf("your grade is B\n");
            }
        }
         
    }
    
    

}
    


