#include<stdio.h>
#include<ctype.h>
main()
{
    char character;
    printf("Enter the character you want\n");
    scanf("%c",&character);
    if(isspace(character))
    printf("the character is a whitespace");
    else
    if(isdigit(character))
    printf("the character is digit");
    else
    if(isupper(character))
    printf("the character is upper case letter");
    else
    if(isalnum(character))
    printf("the character is alpha numeric");
    
    
    
    
        
    
    
}