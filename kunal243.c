#include <stdio.h>
int update(int*,int*);
int update1(int*,int*);

int main()
 {
    int a, b;
    //int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    int z=update(&a, &b);
    int y=update1(&a,&b);
    printf("%d\n%d", z, y);

    return 0;
}
int update(int *x,int *y) 
{
return (*x+*y);
//return (*x+*y);
    // Complete this function    
}
int update1(int *x,int *y)
{
    return (-(*x-*y));
}
