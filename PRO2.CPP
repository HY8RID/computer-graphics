#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int gdriver = DETECT,gmode;
	int xmax,ymax;
	initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
	setcolor(getmaxcolor());
	xmax = getmaxx();
	ymax = getmaxy();
	line(xmax/2,0,xmax/2,ymax);
	line(0,ymax/2,xmax,ymax/2);
    circle(170,125,100);
        outtextxy(170,125,"circle");
    rectangle(58,251,304,392);
        outtextxy(160,300,"rectangle");
    arc(500,150,45,135,100);
        outtextxy(500,150,"semi circle");
    ellipse(500,300,0,360,75,25);
        outtextxy(500,300,"ellipse");
	getch();
	closegraph();
	return 0;	
}
