#include<graphics.h>
#include<conio.h>

int main(void)
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
	char a;
	do{
	a=getch();
	if(a=='1')
	circle(320, 240, 200);
	if(a=='2')
	rectangle(10, 10, 250, 250);
}while (a!='q');
	getch();
	closegraph();
	return 0;
}

