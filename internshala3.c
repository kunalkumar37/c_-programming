#include<stdio.h>
int main()

{
    int num[5]={15,45,65,48,89};
    int i=0;
    for(i=0;i<10;i++)
    {
    printf("the address of memory!!:: %d\n",&num[i]);
     }
      return 0;
}