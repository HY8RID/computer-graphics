#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
    int dx,dy,x,y,p,x1,y1,x1,y2;
	int gd,gm;
    clrscr();
    printf("Enter co-ordinates of first point :");
    scanf("%d %d",&x1,&y1);
    printf("Enter co-ordinates of second point :");
    scanf("%d %d",&x2,&y2);
	dx = (x2-x1);
    dy = (y2-y1);
    p=2*(dy)-(dx);
    x = x1;
    y = y1;
    detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	putpixel(x,y,WHITE);
	getch();
	closegraph();
}
