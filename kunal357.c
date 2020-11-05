#include<stdio.h>
#define AND &&
#define OR ||
int main()
{
    int f,x,y;
    printf("enter the number you want");
    scanf("%d %d %d",&x,&f,&y);
        if((f<5)AND(x<=20 OR y<=45))
    printf("your pc will always work fine :\n");
    else
    printf("in ffront of the maintennace :\n");
    return 0;
}