#include<stdio.h>
#include<ctype.h>
main()
{
    char alphabet;
    printf("Enter a alphabet\n");
    scanf("%c",&alphabet);
    if(islower(alphabet))
    putchar(toupper(alphabet));
    else
    putchar(tolower(alphabet));
    
        
    
    
}

