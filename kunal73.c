#include<stdio.h>
void fun1(void);
void fun2(void);
void main()
{
    fun1();
    fun2();

}
void fun1()
{
    int a=10,staticint b=20;
    printf("a=%d ,b=%d",a,b);
    a++;
    b++;
}