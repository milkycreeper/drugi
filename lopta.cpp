#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<graphics.h>


int main(void)
{
	int gd = DETECT, gm,n=5, dilej;
	initgraph(&gd, &gm, (char*)"");

	int height=230;
	
	while (n){
		
		switch(n){
			case 1:dilej=60;break;
				case 2:dilej=40;break;
					case 3:dilej=25;break;
						case 4:dilej=15;break;
							default: dilej=10;break;
		}
	
	for(int i=230-height;i<230;i+=2){
	rectangle(50, 50, 400, 400);
	circle(225, 145+i, 30);
	delay(dilej);
	cleardevice();}
	height-=50;
	n--;
	for(int i=230;i>230-height;i-=2){
	rectangle(50, 50, 400, 400);
	circle(225, 145+i, 30);
	delay(dilej);
	cleardevice();}
	
	
	}
	
	
	
	
	getch();
	closegraph();
	return 0;

}
