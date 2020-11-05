//reliability e-at
//a=0.001
#include<stdio.h>
#include<math.h>
#define lambda 0.001
void main()
{
    double d;
    float f;
    int i,a;
    for(i==1;i<=27;i++)
    {
    printf("-");
    }
    for(d=0;d<=300
    ;d+=150)
    {
        f = exp(-lambda*d);
        a = (int)(50*f+0.5);
        printf("\n|");
        for(i=1;i<=a;++i)
        {
            printf("*");
        
        }
        printf("#\n");


    }
    for(i=1;i<3;i++)
    {
        printf("|\n");
    }


}