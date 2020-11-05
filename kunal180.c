#include<stdio.h>
void showbits(unsigned char);
int main()
{
unsigned char num=0xAD,j;
printf("\nvalue of num =");
showbits(num);
j=num & 0x20;
if(j==0)
printf("\nits fifth bit is off ");
else

    printf("\nits fifth bit is on");}
j=num & 0x0B;
if(j==0)
printf("\n its third bit is off");
else
{
    printf("\nits bit is on");
    
}


}