#include<graphics.h>
#include<conio.h>
#include <math.h>

int main(void)
{
	int gd=DETECT, gm,y,x,y1,x1;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	float alpha;
	int i;

	
	for(;;){
		
		for(i=200;i<340;i++){
			
			alpha = 3.1415 * i /180;
		y=220-sin(alpha)*220;
		x=300+cos(alpha)*220;
		y1=220-sin(alpha)*250;
		x1=300+cos(alpha)*250;
		circle(x1,y1,30);
		line(300, 220, x, y);
		delay(10);
		cleardevice();	
		}
		
		for(i=340;i>200;i--){
			alpha = 3.1415 * i /180;
		y=220-sin(alpha)*220;
		x=300+cos(alpha)*220;
		y1=220-sin(alpha)*250;
		x1=300+cos(alpha)*250;
		circle(x1,y1,30);
		line(300, 220, x, y);
		delay(10);
		cleardevice();	
		}
		
		
		
		
		
	}	
	
	








	
	
	getch();
	closegraph();
	return 0;
	}
