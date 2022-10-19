#include<stdio.h>

float novci(int x, float y){
	return x+0.5*y;
}
int main(){
	
	int a;
	float b;
	float c;
	printf("koliko ima kovanica od 1kn? ");
	scanf("%d", &a);
	printf("\nkoliko ima kovanica od 0.5kn?"),
	scanf("%.2f", &b);
	
	c=novci(a,b);
	
	printf("\n%f",c),
	
	return 0;
}
