#include <stdio.h>
#include <stdlib.h>

struct matura{
	int bodovi;
	char predmet[15];
	char prezime[20];
	int ocjena;
} ma[24];


int main(){

	int i=24;
	
	while(i--){
		scanf("%d", &ma[i].bodovi);
		scanf("%s", ma[i].predmet);
		scanf("%s", ma[i].prezime);
		scanf("%d", &ma[i].ocjena);
	}
	
	
	
	
	return 0;
}
//Napi�ite struktura naziva matura �iji su elementi: bodovi, predmet, prezime i ocjena.
//Skup od 24 varijable definiraj polje struktura, neka bude ma.
//Napi�i dio koda tako dase u svih 24 elementa polja ma mo�e u�itati podaci koje smo definirali u strukturi
