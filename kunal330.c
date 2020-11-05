#include<stdio.h>
#include<ctype.h>
int main()
{
    char str;
    str=getchar();
    if(islower(str))
    {
        putchar(toupper(str));

    }
    else
    {
    putchar(tolower(str));
    }
    return 0;
    
}