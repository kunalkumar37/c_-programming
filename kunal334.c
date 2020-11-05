#include<stdio.h>
int main()
{
    int i=1,j=1;
    for(; ;)
    {
        if(i>5)
        break;
        else
        {
            j=j+i;
            printf("%d",j);
            i+j;

        }
        return 0;
    }
}