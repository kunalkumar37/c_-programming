#include<stdio.h>
void show(int ,float);
int main()
{
void(*show)(int ,float);
//s=show;
(*show)(10,3.14);
return 0;


}
void show(int i,float f)


{printf("%d%f",i,f);
}