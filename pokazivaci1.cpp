#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void auto (int x1, int x2, float y1, float y2, int *koji, float *posto)
{
	float a1= (float) x1/y1;
	float a2= (float) x2/y2;

	if(a1 > a2){	
	*koji=1;
	*posto = (a1/y1)*100;
	}
	else if(a1 <a2){
	*koji= 2;
	*posto= (a2 / a1)*100;
}
	else{
		*koji= 0;
		*posto= 0;
	}
	
}

int main(){
	
	int a;
	int b;
	int c;
	int d;
	int koji;
	float posto;
	
printf("unesi km/l: ");
scanf("%d", &a);
printf("\nunesi km/l:  ");
scanf("%d", &b);
printf("unesi €/l: ");
scanf("%d", &c);
printf("\nunesi €/l:  ");
scanf("%d", &d);

auto(x1,x2,y1,y2,&koji,&posto);
printf("%d je bolji za %f posto",koji, posto);

return 0;
		
}
