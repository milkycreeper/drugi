#include<graphics.h>
#include<conio.h>

int main(void)
{
	int gd = DETECT, gm;
	int x=0,y=0,y2=0,x2=0;
	initgraph(&gd, &gm, (char*)"");
	char a,b;
	do{
	
	a=getch();
	cleardevice();
	if(a=='w') y-=20;
	if(a=='s') y+=20;
	if(a=='a') x-=20;
	if(a=='d') x+=20;
	rectangle(10+x, 10+y, 120+x, 120+y);
	b=getch();
	if(b=='i') y2-=20;
	if(b=='k') y2+=20;
	if(b=='j') x2-=20;
	if(b=='l') x2+=20;
	
	rectangle(120+x2, 120+y2, 230+x2, 230+y2);
}while (a!='q');
	getch();
	closegraph();
	return 0;
}

