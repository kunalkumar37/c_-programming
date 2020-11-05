#include<stdio.h>
int main()
{
    struct car
    {
        int km;

    }*p1[2];
    struct carc1={1234};
    p1[0]=&c1;
    printf("%d",p1[0]->km);
    return 0;
}