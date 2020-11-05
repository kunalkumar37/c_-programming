#include<stdio.h>
#include<string.h>
int main()
{
    char str1[15];
    char str2[15];
    printf("enter the first string!!\n");
    scanf("%s",str1);
    printf("enter the second string!\n");
    scanf("%s",str2);
    strcat(str1," ");
    strcat(str1,str2);
    printf("%s",str1);
    return 0;

}