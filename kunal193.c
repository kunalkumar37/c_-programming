#include<stdio.h>
#include<string.h>
int main()
{
    struct  book;
    {
        int pages;
        char name[10];

    }a;
    a.page=10;
    strcpy(a.name,"Cbasics");
    printf("%s=%d",a.name,a.page);
    return 0;
}