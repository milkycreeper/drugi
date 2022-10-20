#include <stdio.h>

float kupit(int min, int max, int s, int c){
	int zavrsna_cijena = s*(100+c)/100;
		return zavrsna_cijena>=min && zavrsna_cijena<=max;
	}
	


int main(){
	
	int min; 
	int max; 
	int s; 
	int c;
	
	printf("Unesi min: ");
	scanf("%d", &min);
	printf("\nUnesi max: ");
	scanf("%d", &max);
	printf("\nUnesi cijenu: ");
	scanf("%d", &s);
	printf("\nUnesi promjenu: ");
	scanf("%d", &c);
	
	if (kupit(min, max,s,c)) printf("Kupice dionice");
	else printf("nece kupit");
}
