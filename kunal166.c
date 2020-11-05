#include<stdio.h>
void unit();

void area(int l,int b,void(*p)());
main()
{
    area(20,10,unit);

}
//this function declare after the area function
void unit()
{
    printf("sqcm");

}
void area(int l,int b,void(*p)())
{
    int a;
    a=l*b;
    printf("area of rectangle %d",a);
    p();
}
