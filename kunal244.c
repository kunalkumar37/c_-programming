#include<stdio.h>
int greatest(int ,int ,int ,int);
int main()
{
    int a,b,c,d;
    printf("enter the number you want:\n");
    scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
int l=greatest(a,b,c,d);
printf("%d is greatest among all",l);

}
int greatest(int x,int y,int z,int w)
{
    int largest;
    if((x>y)&&(x>z)&&(x>w))
    largest=x;
    else
    if ((y>x)&&(y>z)&&(y>w))
    largest=y;
    else
if((z>x)&&(z>y)&&(z>w))
largest=z;
else

    largest=w;


    
    
return largest;
    
}