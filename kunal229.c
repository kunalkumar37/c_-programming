#include<stdio.h>
int main()
{
    struct info1
    char hobby[10];
    int cj;

};
struct info2
{
char vehno[10];
int dist;

};
union info
{
    struct info1 a;
    struct info2 b;

};
struct employee
{
    char n[50];
    char grade[4];
int age;
union info f;

};
struct  employee e;
