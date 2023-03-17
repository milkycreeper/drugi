#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct korni{
	
	int zaob;
	int duznog;
	int brpl;
	char ime [20];
}k; 

void nova(){

	FILE*filePointer;
	filePointer=fopen("kornjaca.txt","a");
	
	printf("kolika je zaobljenost kornjace?");
	scanf("%d", &k.zaob);
	printf("kolika je duzina nogu kornjace?");
	scanf("%d", &k.duznog);
	printf("kolika je broj plocica kornjace?");
	scanf("%d", &k.brpl);
	printf("ime kornjace?");
	scanf("%s", k.ime);
	
	fprintf(filePointer, "%d, %d, %d, %s", k.zaob, k.duznog, k.brpl, k.ime);

fclose(filePointer);
}


void maks(){
	
	FILE*filePointer;
	filePointer=fopen("kornjaca.txt","a");
	char OvoJeNajvecaOdSvijuKornjaci[90];
	int max=0;
	while(fscanf(filePointer, "%d, %d, %d, %s", k.zaob, k.duznog, k.brpl, k.ime)==4){
		if(k.zaob>max){
			max=k.zaob;
			OvoJeNajvecaOdSvijuKornjaci=k.ime;
		}
		
	}
	printf("najjakija je %s",OvoJeNajvecaOdSvijuKornjaci);
	
	
	fclose(filePointer);
}
	
	void min







int main(){

char odabir[10];
do{
	
	printf("|\t 1. unesi novu kornjacu \t|")
	printf("|\t 2.max \t\t\t|")	
	printf("|\t 3.min\t\t\t|")
	printf("|\t 4.ispis all\t\t\t|")
	printf("|\t 5.Exit\t\t\t|")

} while (odabir!=5)




}
