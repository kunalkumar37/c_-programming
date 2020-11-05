#include<stdio.h>
int main()
{
    int i=3;
    int*j;
    j=&i;
    printf("%d\n",i);
    printf("%d\n",j);
    printf("%d\n",&i);
    printf("%d\n",&j);
    printf("%d",*(&i));
    printf("%d",*(&j));
    return 0;
}