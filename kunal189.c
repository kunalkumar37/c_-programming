#include<stdio.h>
int main()
{
    struct laptop
    {
        int cost;
        char brand[10];

    };
    struct laptop l1={500,"ACER"};
    struct laptop l2={600,"IBM"};
    printf("name=%s",l1.brand);
    return 0;
}