#include<stdio.h>
struct student
{
int sno;
char sname[40];
float smarks;
};

 void main()
{
    struct student s={100,"kunal",85};
    printf("sno:%d\n",s.sno);
    printf("sname:%s\n",s.sname);
    printf("smarks:%f\n",s.smarks);
    
    

}