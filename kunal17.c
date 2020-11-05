#include<stdio.h>
 #include<ctype.h>
main()
{
    char character;
    printf("press any letter\n");
    scanf("%c",&character);
    if(isalpha(character))
    printf("the letter is character");
    else
    if(isdigit (character))
    
        printf("the letter is digit");
    
    else
    
        printf("the charcter is not alphanumeric");
    
    
    


}