#include<stdio.h>
int main()
{
    int i=10;
    int *j;
    //j=&i;
    int k=*j;
    printf("%d\n",j);
    printf("%d\n",&i);
    printf("%d\n",k);
    return 0;
}