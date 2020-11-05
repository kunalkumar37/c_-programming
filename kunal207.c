#include<stdio.h>
int main()
{
    union values
    {
        int intval;
        char chrval[2];


    };
    union values val;
    val.chrval[0]='A',val.chrval[1]='B';
    printf("\n%c,%c,%d",val.chrval[0],val.chrval[1]);
    return 0;
}