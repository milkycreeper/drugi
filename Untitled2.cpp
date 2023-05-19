#include<graphics.h>
#include<conio.h>
#include <math.h>
#include<stdio.h>

int main(void)
{
	
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	
	rectangle(100,100,300,300);
	line(100,100,150,50);
	line(300,100,350,50);
	line(350,50,350,250);
	line(300,300,350,250);
	line(150,50,350,50);
	
	
	
	
	getch();
	closegraph();
	return 0;
	}
