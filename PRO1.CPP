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
	getch();
	closegraph();
	return 0;	
}
