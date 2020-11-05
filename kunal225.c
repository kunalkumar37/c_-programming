#include<stdio.h>
#define MALE 1;
#define FEMALE 2;
#define MINOR 3;
#define MAJOR 4;
int main()
{
    struct policyholder
    {
        unsigned gender:1;
        unsigned form:2;
        unsigned period:3;



    };
    struct policyholder ph;
    ph.gender=MALE;
    ph.form=MINOR;
    //ph.period
    printf("gender of policy holder:%d",ph.gender);
    printf("form of policy holder:%d\n",ph.form);


}