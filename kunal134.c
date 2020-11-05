//#include<graphics.h>
#include<conio.h>
int main()
{
    int gd=DETECT,gm;
    intitgraph(&gd,&gm," ");
    bar(100,100,200,400);
    circle(400,250,50);
    closegraph();
    return 0;
}