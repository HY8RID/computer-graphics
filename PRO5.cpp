#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
	int gd = DETECT,gm,i;
	int x1 = 100,y1 = 200,x2 = 300,y2 = 400;
	int dx,dy,step,xinc,yinc;
	int x,y;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	dx = x2-x1;
	dy = y2-y1;
	if(dx>dy)
	{
		step = dx;
	}
	else
	{
		step = dy;
	}
	xinc = dx/step;
	yinc = dy/step;
	x=x1,y=y1;
	for(i=0;i<step;i++)
	{
		x = x * xinc;
		putpixel(x,y,WHITE);
	}
	getch();
	closegraph();
}
