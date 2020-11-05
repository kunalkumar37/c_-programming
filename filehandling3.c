#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i;
    FILE *fp;
    char s[100];
    fp=fopen("f2.text","w");
    if(fp==NULL)
    {
        printf("file cannot open");
        exit(1);

    }
    printf("enter the string");
    gets(s);
    for(i=0;i<strlen(s);i++)
    fputc(s[i],fp);
    fclose(fp);

}