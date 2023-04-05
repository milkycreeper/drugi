#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <conio.h>

struct zeko{
	int masa;
	int kolicina_hrane;
	int darezljivost;
	char ime[20];
}z;

void unos()
{
	FILE * fp;
	fp=fopen("zeko3.txt","a");
	
	
	printf("\nUnesi masu zeca:\t");
	scanf("%d", &z.masa);
	printf("\nUnesi kolicinu hrane:\t");
	scanf("%d",&z.kolicina_hrane);
	printf("\nKolika mu je darezljivost 1-10:\t");
	scanf("%d", &z.darezljivost);
	printf("\nUnesi ime zeca:\t");
	scanf("%s", z.ime);
	
	
	fprintf(fp,"%d\t%d\t%d\t%s\n",z.masa, z.kolicina_hrane, z.darezljivost, z.ime);
	fclose(fp);
	
}

void ispis(){
	
	FILE * fp;
	fp = fopen("zeko3.txt", "r");
	
	while(fscanf(fp,"%d %d %d %s",&z.masa, &z.kolicina_hrane, &z.darezljivost, z.ime)==4)
	printf("%d\t%d\t%d\t%s\n",z.masa, z.kolicina_hrane, z.darezljivost, z.ime);
	
	fclose(fp);
	
}

void filter(){
	
	FILE * fp;
	fp = fopen("zeko3.txt", "r");
	
	char odabir[25];
	int masa=0;
	printf("kakvo filtriranje??\n masa za filtriranje po masi\ndarez za filtriranje po darezljivosti\n");
		scanf("%s", odabir);
		if(!strcmp(odabir,"masa")){
			printf("do kojeb mase?");
			scanf("%d", &masa);
			while(fscanf(fp,"%d %d %d %s",&z.masa, &z.kolicina_hrane, &z.darezljivost, z.ime)==4){	
				if (masa>z.masa)
					printf("%d\t%d\t%d\t%s\n",z.masa, z.kolicina_hrane, z.darezljivost, z.ime);}
		}else {
			printf("od kojeb darezljivosti?");
			scanf("%d", &masa);
			while(fscanf(fp,"%d %d %d %s",&z.masa, &z.kolicina_hrane, &z.darezljivost, z.ime)==4){	
				if (masa<z.darezljivost)
					printf("%d\t%d\t%d\t%s\n",z.masa, z.kolicina_hrane, z.darezljivost, z.ime);}
		}
		
		fclose(fp);
	}
	
void komb_fil(){
	
	FILE * fp;
	fp = fopen("zeko3.txt", "r");
	
	char odabir[25];
	int hrana=0, darezljivost=0;
			printf("do kojeb kol hrane?");
			scanf("%d", &hrana);
			printf("do kojeb darezljivosti?");
			scanf("%d", &darezljivost);
			while(fscanf(fp,"%d %d %d %s",&z.masa, &z.kolicina_hrane, &z.darezljivost, z.ime)==4){	
					if(hrana<z.kolicina_hrane && darezljivost>z.darezljivost)
					printf("%d\t%d\t%d\t%s\n",z.masa, z.kolicina_hrane, z.darezljivost, z.ime);}
		
		
		fclose(fp);

}





int main()
{
	int odg;
	do{
		printf("\t1. Unos\t\n\t2. Ispis\t\n\t3. Filtriranje po masi ili darezljivosti\t\n\t4. kombinacija filtera\t\n\t5. max, min,najisplativiji\t\n\t6. Exit\n");
		printf("Molim te koristi brojeve za odabir!!");
		scanf("%d",&odg);

		switch(odg){
			case 1: unos();
			break;
			case 2: ispis();
			break;
			case 3: filter();
			break;
			case 4: komb_fil();
			break;
			case 5: //maxminnajb();
			break;
			case 6: //exit;
			break;
			default:
				printf("de pise ti od 1 do 6");
		}	
	} while(odg!=6);
	



}

