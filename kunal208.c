#include<stdio.h>
int main()
{
    union uTemp
    {
        double a;
        int b[10];
        char c;

    }u;
    printf("%d",sizeof(union uTemp));
    return 0;
}