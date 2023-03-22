#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>

struct eDnevnik{
	
	char ime[50];
	char predmet[50];
	int ocijena;	
	
}e;

void unos(){
	int flag=0;
	char newPredmet[50];
	
	FILE * fp;
	fp = fopen("eDnevnik.txt", "a");
	
	FILE *fp2;
	fp2= fopen("predmeti.txt","r");
	
	printf("\nUnesi ime ucenika:\t");
	scanf("%s", e.ime);
	printf("\nUnesi predmet:\t");
	scanf("%s", e.predmet);
	printf("\nUnesi ocijenu koju zelis upisati:\t");
	scanf("%d", &e.ocijena);
	
	while(fscanf(fp2,"%s",newPredmet)==1)
		if(!strcmp(e.predmet,newPredmet))
			flag=1;
			
	fclose(fp2);
	
	if(flag==0) {
		fp2=fopen("predmeti.txt","a");
		fprintf(fp2,"%s\n",e.predmet);
		fclose(fp2);
	}
	
	fprintf(fp,"%s\t%s\t%d\n",e.ime,e.predmet,e.ocijena);
	
	fclose(fp);
	printf("press any key to continuar...");
	getch();
}

void ispis(){
	FILE * fp;
	fp = fopen("eDnevnik.txt", "r");
	
	while(fscanf(fp,"%s %s %d",e.ime, e.predmet, &e.ocijena)==3)
	printf("%s\t%s\t%d\n",e.ime,e.predmet,e.ocijena);
	
	fclose(fp);
	printf("press any key to continuar...");
	getch();
}

void prosjek_ocjena(){
	int sum=0, count=0;
	FILE * fp;
	fp = fopen("eDnevnik.txt", "r");
	
	while(fscanf(fp,"%s %s %d",e.ime, e.predmet, &e.ocijena)==3){
		sum+=e.ocijena;
		count++;
	}
	fclose(fp);
	printf("press any key to continuar...");
	getch();
}

void prosjek(){
	int sum=0, count=0;
	char predmet[50];
	FILE * fp;
	fp = fopen("eDnevnik.txt", "r");
	
	printf("Iz kojeg predmeta ochesh prosjek da rachunamo?\n");
	scanf("%s",predmet);
	
	while(fscanf(fp,"%s %s %d",e.ime, e.predmet, &e.ocijena)==3){
		if(!strcmp(predmet,e.predmet)){
			sum+=e.ocijena;
			count++;
	}}
	fclose(fp);
	printf("press any key to continuar...");
	getch();
}

void broj_predmeta(){
	int count=0;
	
	FILE *fp2;
	fp2= fopen("predmeti.txt","r");
	
	while(fscanf(fp2,"%s",e.predmet)==1)
	count++;
	
	printf("Imademo %d predmeta\n",count);
	fclose(fp2);
	printf("press any key to continuar...");
	getch();
}

int main(){

char odabir_meni;

do{
		
system("cls");
printf("--------------------------\n");
printf("| 1. Unesi ocijenu       |\n");
printf("| 2. Prosjek ocijena     |\n");
printf("| 3. Broj predmeta       |\n");
printf("| 4. Prosjek (predmet)   |\n");
printf("| 5. Exit                |\n");
printf("| 6. Ispis svega         |\n");
printf("--------------------------\n");

printf("Sto zelite uciniti?\n ");
	odabir_meni=getch();
	
	
	switch(odabir_meni){
		case '1':
			
			unos();
			break;
		
		case '2':
			prosjek_ocjena();
			break;
		
		case '3':
			broj_predmeta();
			break;
			
		case '4':
			prosjek();
			break;
		case '5':
			break;
		case '6':
			ispis();
			break;
		default:
			printf("nemamotimito");
			break;
		
		
		
	}
	
	
	

}while(odabir_meni!='5');


}
