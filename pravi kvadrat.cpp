#include<graphics.h>
#include<conio.h>
#include <math.h>

int main(void)
{
	int gd=DETECT, gm;
	int h=0,a=1,i=0,b=0,c=2, n=0, k=0;
	initgraph(&gd, &gm, "C:\\TC\\BGI");;
	cleardevice();
	settextstyle(2, 0, 15);
	outtextxy(50, 290, "WOW");
	getch();

	for(int i=0;;i++){
	h+=5;
	b+=2;
	n=h/50;
	for(int j=0; j<n ;j++){
		
	k=h - j*50;
	k=k<0?0:k;
	int colour=j%15;
	rectangle(250-k,250-k,300+k,300+k);
	setfillstyle(SOLID_FILL,colour);
	floodfill(300,200,WHITE);
	}

		delay(100);
		cleardevice();
	}
	

	getch();
	closegraph();
	return 0;
	}
