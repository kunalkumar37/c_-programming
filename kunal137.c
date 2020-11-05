#include<stdio.h>
int main()
{
    char*ptr="ramco systems";
    (*ptr)++;
    printf("%s\n",ptr);
    ptr++;
    printf("%s\n",ptr);

}