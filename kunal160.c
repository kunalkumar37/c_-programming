#include<stdio.h>
main()
{
    while(fun());

}
int fun()
{
    static int x=4;
    printf("%d\n",x);
    return (--x);
}
