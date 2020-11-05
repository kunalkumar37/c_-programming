#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20],str2[20];
    printf("enter the string :\n");
    scanf("%s",str1);
     scanf("%s",str2);
     strcpy(str1,str2);
     printf("%s%s",str1,str2);

}