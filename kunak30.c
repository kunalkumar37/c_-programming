//To find sum of two integers without using ‘+’ operator.
//This is a very easy mathematics trick.
//We know that a + b = – (-a-b). So this will work as a trick for us
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    printf("to sum the number\n");
    scanf("%d\n%d\n",&a,&b);
    printf("the sum :%d\n",-(-a-b));
    return 0;
}