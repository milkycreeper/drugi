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
//Napi�ite struktura naziva matura �iji su elementi: bodovi, predmet, prezime i ocjena.
//Skup od 24 varijable definiraj polje struktura, neka bude ma.
//Napi�i dio koda tako dase u svih 24 elementa polja ma mo�e u�itati podaci koje smo definirali u strukturi
//napisi dio koda kojim �e� napisati prezimena koji �e pro�i maturu
