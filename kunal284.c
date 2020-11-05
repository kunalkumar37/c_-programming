#include<stdio.h>
#include<math.h>
int  area (int ,int ,int );
int sort(int ,int ,int);

int main(void)
{
    int n,a1,b1,c1,a2,b2,c2,a3,b3,c3;
    printf("number of traingels you want :");
    scanf("%d",&n);
    printf("enter the sides of  first traingel:");
    scanf("%d %d %d",&a1,&b1,&c1);
     printf("enter the sides of  second traingel:");
    scanf("%d %d %d",&a2,&b2,&c2);
     printf("enter the sides of  third traingel:");
    scanf("%d %d %d",&a3,&b3,&c3);
    int a=area(a1,b1,c1);
    printf("area=%d\n",a);
    int b=area(a2,b2,c3);
    printf("area=%d\n",b);
    int r=area(a3,b3,c3);
    printf("area\n=%d",r);

    int g=sort(a,b,r);
    printf("sotered=%d",g);
    int h=sort(a,b,r);
     printf("sotered=%d",h);
    int i=sort(a,b,r);
     printf("sotered=%d",i);



    
 }
 int  area(int x,int y,int z)
{
int d,e;
e=(x+y+z)/2;
d=sqrt(e*(e-x)*(e-y)*(e-z));
return (d);
}
int sort(int t ,int u,int v)
{
    int max;
if(t-u>0 && t-v>0)
max=t;
else
{
    if(u-t>0 && u-v>0)
    max=u;

    else
    {
       max=v;


    }
    
}
return (max);


}