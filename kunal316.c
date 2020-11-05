#include<stdio.h>
int main()
{
    int i=10;
    char ch='a';
    float a=3.14;
    char str[20];
    printf("%d %c %f ",i,ch,a);
    sprintf(str ,"%d %c %f",i,ch,a);//stores the values in the character array str.doesnt display on screen
    printf(" str=%s\n",str);
    return 0;
}