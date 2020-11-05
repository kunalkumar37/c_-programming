#include<stdio.h>
#define ROW 10
#define COLUMN 20
main()
{
    int (*p)[ROW][COLUMN];
    printf("%d",sizeof(*p));

}