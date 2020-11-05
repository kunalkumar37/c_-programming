//takes nothing return nothing
#include<stdio.h>
#include<conio.h>
main()
{
    void add(void); //function declaration
    add();// function call

}
void add()//function definition
{
    int a,b,c;
    printf("enter the numbers:\n");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("add is %d",c);

}