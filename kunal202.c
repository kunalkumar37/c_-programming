#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,c;
    printf("enter the numbre you want\n");
    scanf("%d",&a);
for(i=2;i=sqrt(a);i++)
if(a%i==0)
{
    c=1;
    break;

}
if(c==1)
printf("prime number");
else
{
    printf("not prime number");
}
return 0;

}