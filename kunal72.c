#include<stdio.h>
int fact(int);
void main()
{
    int num,f;
    printf("Enter the number :\n");
    scanf("%d",&num);
    f=fact(num);
    printf("factorial is =%d\n",f);

}
fact(int num)
{
    if(num==0||num==1)
    return 1;
    else
    {
        return (num*fact(num-1));
    }
    
}