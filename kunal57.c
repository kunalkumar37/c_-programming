#include<stdio.h>
int main()
{
    int arr[50],n,i,key,loc;
    printf("enter the number you want");
    scanf("%d",&n);
    printf("enter %d elements:",n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to insert:");
    scanf("%d",&key);
    printf("enter loc to interest:");
    scanf("%d",&loc);
    for(i=n-1;i>=loc;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[loc]=key;
    


    
}