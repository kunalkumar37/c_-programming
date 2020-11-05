#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20],str2[20];
    printf("Enter two strings\n");
    scanf("%s",str1);
    scanf("%s",str2);
    strcat(str1,str2);
    printf("first string=%s\n,second string=%s\n",str1,str2);
    
}