#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

struct cvice{
	int latice;
	int visina;
	int jeLiDrvo;
	char boja[20];
};

void broj(struct cvice c[]){
	
	int i,j,min_idx;
	struct cvice temp;
	
	for(i=0;i<5;i++){
		min_idx=i;
		for(j=i+1;j<6;j++)
			if(c[j].latice<c[min_idx].latice)
			min_idx=j;
		
		temp=c[min_idx];
		c[min_idx]=c[i];
		c[i]=temp;
	}
	for(i=0;i<6;i++)
		printf(c[i].jeLiDrvo?"%d\t %d\t DA\t %s\n\n":"%d\t %d\t NE\t %s\n\n", c[i].latice, c[i].visina, c[i].boja);
}

void max(struct cvice c[]){
	
	int i,j,min_idx;
	struct cvice temp;
	
	for(i=0;i<5;i++){
		min_idx=i;
		for(j=i+1;j<6;j++)
			if(c[j].visina<c[min_idx].visina)
			min_idx=j;
		
		temp=c[min_idx];
		c[min_idx]=c[i];
		c[i]=temp;
	}
	for(i=0;i<6;i++)
		printf(c[i].jeLiDrvo?"%d\t %d\t DA\t %s\n\n":"%d\t %d\t NE\t %s\n\n", c[i].latice, c[i].visina, c[i].boja);
}


void ispis(struct cvice c[]){
	int i;
for(i=0;i<6;i++)
		printf(c[i].jeLiDrvo?"%d\t %d\t DA\t %s\n\n":"%d\t %d\t NE\t %s\n\n", c[i].latice, c[i].visina, c[i].boja);
}


void filterB(struct cvice c[], char odabir[]){
	int i;
	for(i=0;i<6;i++)
			if(!strcmp(odabir,c[i].boja))
				printf(c[i].jeLiDrvo?"%d\t %d\t DA\t %s\n\n":"%d\t %d\t NE\t %s\n\n", c[i].latice, c[i].visina, c[i].boja);
}

void filterD(struct cvice c[], char odabir[]){
	int i;
	int o=strcmp(odabir,"NE")?1:0;
		for(i=0;i<6;i++)
			if(c[i].jeLiDrvo==o)
				printf(c[i].jeLiDrvo?"%d\t %d\t DA\t %s\n\n":"%d\t %d\t NE\t %s\n\n", c[i].latice, c[i].visina, c[i].boja);
}


int main(){
	int i;
	int o;
	char odabir[20];
	struct cvice c[6]={3, 5, 0, "plava",
										4, 7, 1,"crvena",
										10, 2, 1, "zelena",
										7, 6, 0, "narancasta",
										20, 5, 0, "lila"
	};
	
	printf("Unesi broj latica: ");
	scanf("%d", &c[5].latice);
	printf("\nUnesi visinu: ");
	scanf("%d", &c[5].visina);
	printf("\nUnesi je li drvo: ");
	scanf("%d", &c[5].jeLiDrvo);
	printf("\nUnesi boju: ");
	scanf("%s", c[5].boja);
	
	
	do{
		
	printf("Sta os?:\nMože filtriranje , sortiranje ili ispis!! ");
	scanf("%s", odabir);
	if(!strcmp(odabir,"filtriranje"))
	{
		printf("A kakvo filtriranje??\n boja za filtriranjepo boji\ndrvo za filtriranje po tome jel drvo\n");
		scanf("%s", odabir);
		if(!strcmp(odabir,"boja")){
			printf("Još mi samo rec koju boju oæeš\n sve malim slovom\n");
			scanf("%s", odabir);
			filterB(c, odabir);
		}else {
			printf("Još mi samo rec oces li drvo ili ne\n napisi DA ili NE\n");
			scanf("%s", odabir);
			filterD(c, odabir);
		}
			
	} else if(!strcmp(odabir,"sortiranje")){
		printf("A kakvo sortiranje??\n broj za sortiranje po broju latica\nvisina za sortiranje po visini\n");
		scanf("%s", odabir);
		if(!strcmp(odabir,"broj")) broj(c);
		else max(c);
		
	}else if(!strcmp(odabir,"ispis")) ispis(c);
		
		
		
		
		
	}while(strcmp(odabir,"Q"));
	
	
	
	

	
	
}
