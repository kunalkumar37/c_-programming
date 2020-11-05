#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[100];
    int counter;
    int countdigits,countalphabets,countspaces,specialcharacters;
    countdigits=countalphabets=countspaces=specialcharacters=0;
    printf("enter the string");
    gets(str);
    for(counter=0;str[counter]!=NULL;counter++)
    {
        if(str[counter]>='0' && str[counter]<='9')
        countdigits++;
        else if((str[counter]>='A'&&str[counter]<='Z')||(str[counter]>='a'&&str[counter]<='z'))
            countalphabets++;

            else    if(str[counter]==' ')
                countspaces++;
                else
                
                    specialcharacters++;

    }
    printf("digits:%d alphabets:%s spaces:%d specialcharacters:%d",countdigits,countalphabets,countspaces,specialcharacters);

return 0;

}