#include<stdio.h>
int main()
{
    int i;
    char a[]="\0";
    if(printf("%s",a))
    printf("empty string\n");
    else
    {
        printf("not empty string\n");

    }
    return 0;
    
}