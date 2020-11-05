#include<stdio.h>
void swap(char*str1,char*str2)
{
    char *temp=str1;
    str1=str2;
    str2=temp;

}
main()
{
    char *str1="kunal";
    char *str2="kumar";
    swap(str1,str2);
    printf("str1is %s\nstr2 is %s",str1,str2);


}