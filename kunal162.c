#include<stdio.h>
char f1(char ch);
main()
{
    printf("%c",f1(getchar()));
    getch();

}
char f1(char ch)
{
    if(ch==32)
    return('\n');
    printf("%c",f1(getchar()));
    return (ch);
}
