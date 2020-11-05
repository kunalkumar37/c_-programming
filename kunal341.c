#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
   // printf("enter the string:");
    gets(str);
    int count=0 ;
    while(str[count] !='\0')
    {
    if(str[count]==' ')
    printf("\n");
    else
    {
        printf("%c",str[count]);
    }
    count++;
    }
    return 0;
}