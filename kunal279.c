#include<stdio.h>
#include<math.h>
int main()cos
{
    int l1,l2,g1,g2,d;
    float f;
    printf("enter the lattitude of earth(l1.l2):");
    scanf("%d %d",&l1,&l2);
    printf("enter the longitude of earth(g1,g2):");
    scanf("%d %d",&g1,&g2);
    f=sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1);
    d=3963*1/cos(f);
    printf("%f %d",f,d);
    return 0;

}