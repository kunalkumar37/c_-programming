#include<stdio.h>
int main()
{
    struct bus
    {
        int seats;

    }F1,*F2;
    F1.seats=20;
    F2=&F1;
    F2->seats=15;
    printf("%d",F1.seats);
    return 0;
}