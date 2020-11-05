#include<stdio.h>
int main()
{
    enum days{MON=-1,TUE,WED=4,THU,FRI,SAT};
    printf("%d,%d,%d,%d",MON,TUE,WED,THU);
    return 0;
}