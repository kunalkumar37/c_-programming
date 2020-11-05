#include<stdio.h>
int main()
{
    struct tree
    {
        int h;
        int w;

    };
    struct tree tree1={10};
    printf("%d\n",tree1.w);
    printf("%d\n",tree1.h);
    return 0;
}
