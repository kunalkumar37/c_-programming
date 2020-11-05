#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float area;
    int count ;
    count =1;
    while(count<=5)
    {
        printf("enter the side of traingle=%d\n",count);
        scanf("%d %d %d",&a,&b,&c);
        d=(a+b+c)/2;

        area=sqrt(d*(d-a)*(d-b)*(d-c));
        printf("area=%f\n",area);
        count =count+1;

    }
    return 0;
}