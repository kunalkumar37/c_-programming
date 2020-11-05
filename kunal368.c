#include <stdio.h>
int main()
{int num[4] = {10, 20, 30, 40}; 
int *ptr = num; 
printf("%d\n",ptr);

printf("%d\n",ptr++);
return 0;
}