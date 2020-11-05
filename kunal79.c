#include<stdio.h>
void function (void);
void function1 (void);
void function2 (void);
int a,b=20;
voidmain()
{
    printf("inside main a=%d,b=%d\n",a,b);
    function();
    function1();
    function2();

}
function()
{
    printf("inside function a=%d,b=%d\n",a,b);

}
function1()
{
    printf("inside function a=%d,b=%d\n",a,b);

}
function2()
{
    printf("inside function a=%d,b=%d\n",a,b);
    
}