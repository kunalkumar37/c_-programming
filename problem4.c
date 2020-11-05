#include<stdio.h>
int main()
{
    char another ='y';
    int num;
    while(another=='y')
    {
        printf("enter a number");
        scanf("%d",&num);
        printf("square of anumber %d is %d\n",num,num*num);
        printf("ciksahus");
        fflush(stdin);
        scanf("%c",&another);
        
    }
    return 0;
}