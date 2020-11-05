#include<stdio.h>
int main()
{
    enum status{pass,fail,atskt};
    enum status std1,std2,std3;
    std1=pass;
    std2=fail;
    std3=atskt;
    printf("%d %d %d\n",std1,std2,std3);
    return 0;

}