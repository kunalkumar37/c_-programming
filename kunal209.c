#include<stdio.h>
void showbits(unsigned char);
int main()
{
    unsigned char num;
    for(num=0;num<=5;num++)
    {
        printf("\ndecimal%dis same as binary",num);

    }
    return 0;

}
void showbits(unsigned char n)
{
    int i;
    unsigned char j,k,andmask;
    for(i=7;i>=0;i--)
    {
        j=i;
        andmask=1<<i;
        k=n&andmask;
        k==0?printf("0"):printf("1");
        
    }
}