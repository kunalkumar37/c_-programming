#include<stdio.h>
#define H 1
#define T 0
long toBin(int);
int change(void);
int binaryToDecimal( void);


int main()
{
    long bno;
    int dno;
    

    printf("enter the value you want:");
    scanf("%d",&dno);
    bno = toBin(dno);
    printf("\n The Binary value is : %ld\n\n",bno);
   int c;
   c=change(toBin);
   printf("%d",change);
   dec_value=binaryToDecimal(change);
   printf("%d",dec_value);



    return 0;
}
long toBin(int dno)
{
    long bno=0,remainder,flag=1;
    while(dno != 0)
    {
         remainder = dno % 2;
         bno = bno + remainder * flag;
         flag = flag * 10;
         dno = dno / 2;
    }
    return bno;
}
int change(int toBin)
{
    if(toBin==0)
    return 1;
    if(toBin==1)
    return 0;
}
int binaryToDecimal( void) 
{ 
    
    int dec_value = 0; 
  
    // Initializing base value to 1, i.e 2^0 
    int base = 1; 
  
    int len = num.length(); 
    for (int i = len - 1; i >= 0; i--) { 
        if (num[i] == '1') 
            dec_value += base; 
        base = base * 2; 
    } 
  
    return dec_value; 
} 