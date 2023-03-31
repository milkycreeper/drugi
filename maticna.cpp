#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct maticna{
	int cijena;
	char proizvodac[20];
	int dostupnost;
	int br_proizvoda;
}mp;

void filterP(){
	
	FILE* fp;
	fp=fopen("proizvodac.txt","r");

	while(fscanf(fp,"%s %d", mp.proizvodac,&mp.br_proizvoda)==2)
		printf("%s\t%d\n",mp.proizvodac,mp.br_proizvoda);	
	
	char proizvodac[20];
	fclose(fp);
	
	scanf("%s", proizvodac);
	
	FILE* fp1;
	fp1=fopen("proizvod.txt","r");
	
	while(fscanf(fp1,"%d %s %d", &mp.cijena, mp.proizvodac, &mp.dostupnost)==3)
		if(!strcmp(mp.proizvodac,proizvodac))
				printf("%s, %d, %d", mp.proizvodac, mp.cijena, mp.dostupnost);
				
	fclose(fp1);
}
	
	
	









int main(){

	int odg;
	
do{
		printf("\t1. sort by price\t\n\t2.filter\t\n\t3. exit\t\n");
		printf("Molim te koristi brojeve za odabir!!");
		scanf("%d",&odg);

		switch(odg){
			case 1: //sort by price();
			break;
			case 2: filterP();
			break;
			case 3: //exit();
			break;
			
			default:
				printf("pise ti od 1 do 3");
		}
		
	} while(odg!=3);
	
}

