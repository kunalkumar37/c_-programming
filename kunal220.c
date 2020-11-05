#include<stdio.h>
#define MALE 0;
#define FEMALE 1;
#define SINGLE 0;
#define MARRIED 1;
#define DIVORCED 2;
#define WIDIVORCED 3;
#define CRICKET 4;
#define PAISA  5;

int main()
{
    struct employee {
        unsigned gender:1;
        unsigned mar_stat:2;
        unsigned hobby:3;
        unsigned scheme:4;

    };
    struct employee e;
    e.gender=MALE;
    e.mar_stat=DIVORCED;
    e.hobby=CRICKET;
    e.scheme=PAISA;
    printf("gender=%d\n",e.gender);
    printf("martial status=%d\n",e.mar_stat);
    printf("%d\n",e.hobby);
    printf("%d",e.scheme);

}