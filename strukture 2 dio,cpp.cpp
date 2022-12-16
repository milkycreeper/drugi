#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct matura{
	int bodovi;
	char predmet[15];
	char prezime[20];
	int ocjena;
} ma[4];


int main(){

	int i;
	
	for(i=0;i<4;i++){
	scanf("%d", &ma[i].bodovi);
		scanf("%s", ma[i].predmet);
		scanf("%s", ma[i].prezime);
		scanf("%d", &ma[i].ocjena);
	}
	
	
	for(i=0;i<4;i++){
	if (ma[i].ocjena<2)  printf("Nije prosao/la %s\n", ma[i].prezime);
	else printf("Prosao/la %s\n", ma[i].prezime);
}
	
	
	
	
	
	
	
	return 0;
}
//Napišite struktura naziva matura èiji su elementi: bodovi, predmet, prezime i ocjena.
//Skup od 24 varijable definiraj polje struktura, neka bude ma.
//Napiši dio koda tako dase u svih 24 elementa polja ma može uèitati podaci koje smo definirali u strukturi
//napisi dio koda kojim æeš napisati prezimena koji æe proæi maturu
