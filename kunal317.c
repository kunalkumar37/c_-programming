#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("press any key to continue\n");
    getch();//will not echo the character
    printf("type any character\n");
    ch=getche();//will echo the character typed
    printf("tye any character\n");
    getchar();//will echo the character must be followed by enter key
    printf("continue\n ");
    fgetchar();//will echo the character must be followed by enter key
    return 0;
}