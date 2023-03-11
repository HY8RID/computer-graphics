#include <graphics.h>
#include <conio.h>
void main()
{
	int i;
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	/* draw hut */
	rectangle(150,180,250,300);
	rectangle(150,180,420,300);
	rectangle(180,250,220,300);
	line(200,100,150,180);
	line(200,100,250,180);
	line(200,100,370,100);
	line(370,100,420,180);
	getch();
	closegraph();
}
