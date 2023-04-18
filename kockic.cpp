#include<graphics.h>
#include<conio.h>

int main(void)
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");
	
	rectangle(110, 110, 300, 330);
	circle(160, 160, 20);
	circle(250, 160, 20);
	rectangle(160, 270, 250, 290);
	line(110,180,50, 130 );
	line(300,180,350, 130 );
	
	getch();
	closegraph();
	return 0;	

}
