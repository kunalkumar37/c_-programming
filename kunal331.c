#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    ch=getchar();
    if(islower(ch))
    {
        putchar(toupper(ch));

    }
    else{
        return 0;
    }
}