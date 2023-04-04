#include<graphics.h>
#include<conio.h>

int main(void)
{
	int gd = DETECT, gm;
	int x=0,y=0,c=0;
	initgraph(&gd, &gm, (char*)"");
	char a;
	do{
	
	a=getch();
	
	if(a=='w') y-=2;
	if(a=='s') y+=2;
	if(a=='a') x-=2;
	if(a=='d') x+=2;
	if(a=='r') c=c==15?0:c+1;
	putpixel(x, y, c);
	
	
	}while (a!='q');
	getch();
	closegraph();
	return 0;
}
