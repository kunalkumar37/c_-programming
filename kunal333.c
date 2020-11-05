//file operations 
//creation 
//opening
//reading 
//writing
//moving to a specific location    seeking 
//closing afile 
//display a content of afile
#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("PR1.C","r");
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
        break;
        printf("%c",ch);

    }
    printf("\n");
    fclose(fp);
    return 0;
}