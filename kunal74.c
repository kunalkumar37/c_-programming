#include<stdio.h>
void fun(void);
void fun1(void);
void fun2(void);
int a=20,b=10;
void main()
{
    printf("inside main a=%d,b=%d\n",a,b);
    fun();
    fun1();
    fun2();

}
fun()
{
    printf("inside function a=%d,b=%d\n",a,b);
}
fun1()
{
        printf("inside function a=%d,b=%d\n",a,b);

}
fun2()
{
        printf("inside function a=%d,b=%d\n",a,b);

}