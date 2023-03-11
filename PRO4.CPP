#include<conio.h>
#include<graphics.h>
void main()
{
    int gd,gc,xcen,ycen;
    gd = DETECT;
    initgraph(&gd,&gc,"c:\\turboc3\\bgi");
    xcen = getmaxx()/2;
    ycen = getmaxy()/2;
    line(xcen,0,xcen,getmaxy());
    line(0,ycen,getmaxx(),ycen);
    circle(xcen,ycen,200);
    rectangle(xcen-200,ycen-200,xcen+200,ycen+200);
    rectangle(xcen-120,ycen-180,xcen+120,ycen+180);
    ellipse(xcen,ycen,0,360,50,100);
    getch();
}
