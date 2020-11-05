 #include <stdio.h>
#include <string.h>

int main()
{
     int c=0;
     char s[100];
     fgets(s, 100, stdin);
     printf("%s", s);
     for(int i=0;i<=9;i++)
     {
         for(int j=0;j<strlen(s);j++)
         {
             if(s[j]==i){
                 c++;
            }           
         }
         printf("%d", c);
     }

    return 0;
}
