#include<stdio.h>
void main()
{
    int i=105;
    int*p;
    p=&i;


printf("value of i=%d\n",*p );
printf("value of i=%d\n",&i);
printf("adress of i=%d\n",&i);
printf("adress of i=%d\n",p);
printf("adresss of p=%u\n",&p);
}