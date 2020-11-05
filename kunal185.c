
#include<stdio.h>
#include<string.h>
main(void)
{
    char str1[]={"kunal"};
    char str2[]={'a','e','i','o','u'};
    for(int i=0;i<=4;i=i+1)
    
        for(int j=0;j<=4;j=j+1)
    if(str1[i]=str2[j])
    {
    printf("%c\n",str2[i]);
    }
    //return 0;
}