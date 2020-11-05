#include<stdio.h>
main()
{
    int x=5;
    fun(&x);
    printf("%d\n",x);

}
void fun(int *p)
{
    ++*p;
}