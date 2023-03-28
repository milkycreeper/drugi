#include<graphics.h>
#include<conio.h>

int main(void)
{
	int gd=DETECT, gm;
	int i;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	setbkcolor(2);
	cleardevice();
	settextstyle(5, 0, 7);
	outtextxy(50, 300, "Volimo brze aute!");
	getch();
	
	setfillstyle(1, 5);
	for(;;){
		for(i=0; i<=380; i+=15){
			circle(50+i, 390, 10);
			circle(150+i, 390, 10);
			
			bar(20+i, 300, 150+i, 390);
			bar(125+i, 350, 200+i, 390);
			delay(100);
			cleardevice();
		}
	}
	getch();
	closegraph();
	return 0;
	
	
	
}

