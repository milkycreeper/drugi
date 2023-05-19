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
	int i=200,i2=200, c=100;
	do{
		a=getch();
		cleardevice();
		switch(a){
			case 'a':
				i-=20;
				c-=i<i2?10:0;
				break;
			case 'd':
				i+=20;
				c+=i<i2?10:0;
				break;
			case 'w':
				i2-=20;
				c-=i2<i?10:0;
				break;
			case 's':
				i2+=20;
				c+=i2<i?10:0;
				break;
				default:break;		}
		
		bar3d(x1, y1, x1+i, y1+i2, c ,1);
		i++;
		printf("%d\n", i);
		delay(100);
		
	}while(1);
	
	
	
	getch();
	closegraph();
	return 0;
	}
