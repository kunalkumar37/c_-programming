#include<stdio.h>
void findsum(int);
int num1=20;
int main()

{
    int num2=10;
    printf("main(): %d\n",num1+num2);
    findsum(num1);
    return 0;


}
void findsum(int num2)
{
    printf("sum(): %d\n",num1+num2);
    
}