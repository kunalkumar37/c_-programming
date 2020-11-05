#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);

    if(num & 1)
    printf("odd");
    else
    {
        printf("even");

    }
    return 0;
    
}