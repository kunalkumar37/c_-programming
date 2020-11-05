#include<stdio.h>
int main()
{
    int a=12;
    void *ptr=(int *)&a;
    printf("%d",(int*)ptr);
    getchar();
    return 0;
}