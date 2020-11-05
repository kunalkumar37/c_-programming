#include<stdio.h>
int main()
{
    char d;
    printf("enter the character you want to enter\n");;
    scanf("%c",&d);
    //printf("the ascii value of d is%d ",d);
    if ((d>=97 && d <=122)||(d>=65 && d<=90))
    printf("the cahhracter you entered is alphabet\n");
    else
    {
        printf("the character you entered is not alphabet !");

    }
    return 0;
    
}