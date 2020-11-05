#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("enter the number you want:\n");
    scanf("%d",&num);
    prime(num);

}
void prime(int num)
{
    int i,isprime=0;
    for(i=2;i<=num;i++)
    if(num%i==0)
    isprime=1;
    break;


}
if(isprime==1||num==1)
print("not");
else
{
    printf("yes");
}
