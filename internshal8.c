#include<stdio.h>
union test 
{
    int x;
    char arr[4];
    int y;
};
int main()
{
union test t;
t.x=0;
t.arr[1]='g';
printf("%s",t.arr);
return 0;

}