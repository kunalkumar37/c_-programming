#include<stdio.h>
int main()
{
    int arr[]={10,20};
    int *p=arr;
    (*p++)++;
    printf("%d",*p);
    return 0;
}