#include<stdio.h>
void main()
{
    void swap(int,int);

    int a,b,c;
    int swap(int)
    printf("enetr the number you want:\n");
    scanf("%d\n%d\n",&a,&b);
    swap(a,b);


}
void swap(inta,intb)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("the swap number %d%d\n:",a,b)
    //return (a,b);

}