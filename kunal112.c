#include<stdio.h>
struct st{
    int a;
    char c;
};
int main()
{
    //declare an array of 3 structure objects
    struct st st_arr[3];
    struct st st_obj0;
    st_obj0.a=0;
    st_obj0.c='a';
    struct st st_obj1;
    st_obj1.a=2;
    st_obj1.c='b';
    struct st st_obj2;
    st_obj2.a=3;
    st_obj2.c='c';
    st_arr[0]=st_obj0;
    st_arr[1]=st_obj1;
    st_arr[2]=st_obj2;
    printf("\n first element of array has value of a=[%d]and b=[%d]",st_arr[0].a,st_arr[1].c);
return 0;
}