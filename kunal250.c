#include<stdio.h>
int main()
{
    char *p;
    p="c programming";
    printf("%c",*&*p);
    return 0;
}