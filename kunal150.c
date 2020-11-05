#include<stdio.h>
int main()
{
    int A[]={74,89,45,56,258,789};
    int i;
    bubble_sort(A,6);
    for(i=0;i<=6;i++)
    printf("%d",A[i]);

}
void bubble_sort(int A[],int N)
{
    int round,i,temp,flag;
    for(round=1;round<=N-1;round++);
    {
        flag=0;
        for(i=0;i<=N-1-round;i++)
        if(A[I]>A[i+1])
        {
            flag=1;temp=A[i];
            A[i]=A[i+1];
            A[i+1]=temp;

        }
        if (flag==0)
        {
            printf("round=%d\n",round);
            return ;
            
        }
    }
}