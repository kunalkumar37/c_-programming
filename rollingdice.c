#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
int main()
{
    int randomvalue;
    srand(time(NULL));
    randomvalue=(rand()%6)+1;
    puts("rolling the dice >>>>>>>>>>>");
    usleep(20000000);
    printf("you got: %d",randomvalue);
return 0;
}