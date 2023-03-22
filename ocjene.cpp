#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>

struct skola {
	int ocjena;
   char ime[20];
   char predmet[20];
	
}s;

void unos(){

	FILE*filePointer;
	filePointer=fopen("ocjene.txt","a");

	printf("ime ucenika?");
	scanf("%s", s.ime);
	printf("ime predmeta?");
	scanf("%s", s.predmet);
	printf("Kolika mu je ocjena?");
	scanf("%d", &s.ocjena);

	fprintf(filePointer, "%s %s %d",s.ime, s.predmet, s.ocjena);
	fclose(filePointer);
	printf("Pritisnite bilo koju tipku za nastavak");
	getch();
	

} 

void prosjek_oc(){
	
	FILE*filePointer;
	filePointer=fopen("ocjene.txt","a");
	
	int i=0;
	int sum=0;
	{
	while(fscanf(filePointer, "%s %s %d",s.ime, s.predmet, s.ocjena)){
		sum=s.ocjena;
		i++;
	}
	printf("prosjek ocjena je %.2f", (float) sum/i);


	fclose(filePointer);
	}
	printf("Pritisnite bilo koju tipku za nastavak");
	getch();

	
}


void br_predmeta(){

	FILE*filePointer;
	filePointer=fopen("ocjene.txt","r");
	while(fscanf(filePointer, "%s %s %d",o.ime, o.predmet, o.ocjena )){
		
	}
	printf("broj predmeta je %s", o.predmet);


	fclose(filePointer);
	printf("Pritisnite bilo koju tipku za nastavak");
	getch();
	
}


void ispis(){
	
	FILE*filePointer;
	filePointer=fopen("ocjene.txt","r");
	
	while(fscanf(filePointer, "%s %s %d",s.ime, s.predmet, s.ocjena)){
	
	}
	
	
}







int main()
{
	
int odg;

do{
	system("cls");
	printf("\t1.Unos ocjene\t\n");
	printf("\t2.prosjek ocjena\t\n");
	printf("\t3.Broj predmeta\t\n");
	printf("\t4.Prosjek\t\n");
	printf("\t5.Ispis\t\n");
	printf("\t6.Exit\t\n");
	odg=getch();

	switch(odg){
			case '1': 
				unos();
				break;
			case '2': 
				prosjek_oc();
				break;
			case '3': 
				br_pred();
				break;
			case '4': 
				//prosjek_pred();
				break;
			case '5': 
				//ispis()
				break;
			case '6':
				//exit();
				break;
			default:
				printf("de pise ti od 1 do 6\n");
		}



} while (odg!='6');
}
