#include<stdio.h>
int main()
{
    int arr[]={10,20};
    int*p=arr;
    (*p++)++;
    printf("arr[0]=%d 1[arr]=%d",--p);
    return 0;
}