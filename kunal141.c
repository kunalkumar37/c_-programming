#include<stdio.h>
#include<string.h>
int main()
{
    char str1[5],str2[5];
    int i;
    gets(str1);
    gets(str2);
    i=strcmp(str1,str2);
    printf("%d\n",i);
    return 0;
}
