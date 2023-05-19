#include<graphics.h>
#include<conio.h>
#include <math.h>
#include<stdio.h>

int main(void)
{
	
	int x1=100, y1=100;
	
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	
	char a;
	setbkcolor(2);
	cleardevice();
	setfillstyle(1,4);
	int i=200,i2=200;
	do{
		a=getch();
		cleardevice();
		switch(a){
			case 'a':
				i-=20;
				break;
			case 'd':
				i+=20;
				break;
			case 'w':
				i2-=20;
				break;
			case 's':
				i2+=20;
				break;
				default:break;		}
		
		bar3d(x1, y1, x1+i, y1+i2, 20 ,1);
		i++;
		printf("%d\n", i);
		delay(100);
		
	}while(1);
	
	
	
	getch();
	closegraph();
	return 0;
	}
