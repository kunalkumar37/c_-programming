#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
    char ch;
    ch=getchar();
    if(islower(ch))
    putchar(toupper(ch));
    else
    {
        putchar(tolower(ch));

    }
    return 0;
}