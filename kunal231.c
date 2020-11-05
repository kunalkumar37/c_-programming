#include<stdio.h>
int main()
{
    union a
    {
        int i;
        char ch[2];

    };
    union a key;
    key.i=512;
    printf("key.i=%d\n",key.i);
    printf("key.ch[0]=%d\n",key.ch[0]);
    printf("%d\n",key.ch[1]);
    return 0;
}