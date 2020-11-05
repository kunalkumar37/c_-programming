#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    printf("Enter points X1,Y1:\n");
    scanf("%d%d",&a,&b);
    printf("Enter points X2,Y2:\n");
    scanf("%d%d",&c,&d);
    printf("The distance between two points :%.3f\n",sqrt((c-a)*(c-a)+(d-b)*(d-b)));
    return 0;
}