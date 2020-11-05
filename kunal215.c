#include<Stdio.h>
#include<string.h> 
int main()
{
    enum emp_dept
    {
        assembly,manufacturing,accounts,stores
    };
    struct employee
    {
        char name[30];
        int age;
        float bs;
        emum emp_dept depatrment;

    };
    struct employee e;
    strcpy(e.name,"lothar mathenus");
    e.age=28;
    e.bs=5575.50;
    
}
