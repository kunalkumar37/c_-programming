#include<stdio.h>
main()
{
    char a= 'Kunal kumar singh';
    char name[20]="kunal kumar singh";
    printf("output of characters\n");
    printf("%c\n%4c\n%5c\n%6c\n",a,a,a,a);
    printf("output of string\n");
    printf("%s\n",name);
    printf("%1s\n",name);
    printf("%26s\n",name);
    printf("%45.5s",name);
    printf("%.5s\n",name);
    printf("%19s\n",name);
    printf("%16s\n",name);
    printf("%-20s\n",name);
    print("%-20.18s\n",name);
    return 0;

}