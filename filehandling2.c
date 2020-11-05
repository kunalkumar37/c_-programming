//write a program to write hello students in afile
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i;
    FILE *fp;
    char s[]={"hello world"};
    fp=fopen("f1.text","w");
    if(fp==NULL)
    {
        printf("file cannot open");
        exit(1);

    }
    for(i=0;i<strlen(s);i++)
    fputc(s[i],fp);
    fclose(fp);

}