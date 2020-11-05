#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b)
{
    return (*(int*)a<*(int*)b);

}
int main()
{
    int data[]={45,78,55,78,56};
    qsort(data,5,sizeof(int),compare);
    for(int i=0;i<5;i++)
    {
        printf("%d\n",data[i]);

    }
    return 0;
}