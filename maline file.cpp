#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include <conio.h>

struct maline{
	int visina;
	int brGrana;
	int brMalina;
};

void upisiMojuMalinu(struct maline m)
{
	FILE*filePointer;
	filePointer=fopen("maline.txt","a");
	fprintf(filePointer,"%d\t%d\t%d\n",m.visina, m.brGrana, m.brMalina);
	fclose(filePointer);
}

void kolkoImamMalina(){
	
	FILE*filePointer;
	filePointer=fopen("maline.txt","r");
	int sum=0;
	int a,b,c;
	struct maline temp;
	
	while(fscanf(filePointer,"%d %d %d", &temp.visina, &temp.brGrana, &temp.brMalina)==3){
		sum+=temp.brMalina;
		printf("%d\t%d\t\t%d\n",temp.visina,temp.brGrana,temp.brMalina);
	}
	printf("Ukupno je %d malina ", sum);
}

void brisanje(struct maline tempU){
	struct maline temp;
	FILE*filePointer;
	FILE*filePointer2;
	filePointer=fopen("maline.txt","r");
	filePointer2=fopen("temp.txt","w+");
	
	while(fscanf(filePointer,"%d %d %d", &temp.visina, &temp.brGrana, &temp.brMalina)==3){
	if(!(temp.visina==tempU.visina&&temp.brGrana==tempU.brGrana&&temp.brMalina==tempU.brMalina))
		fprintf(filePointer2,"%d\t%d\t\t%d\n",temp.visina,temp.brGrana,temp.brMalina);
	}
	
	fclose(filePointer);
	fclose(filePointer2);
	
	filePointer=fopen("maline.txt","w");
	filePointer2=fopen("temp.txt","r");
	
	
	while(fscanf(filePointer2,"%d %d %d", &temp.visina, &temp.brGrana, &temp.brMalina)==3){
		fprintf(filePointer,"%d\t%d\t\t%d\n",temp.visina,temp.brGrana,temp.brMalina);
	}
	fclose(filePointer);
	fclose(filePointer2);
}




int main()
{
	struct maline m,temp;
	char odg[5];
	
	do{
	printf("Unesi visinu maline: ");
	scanf("%d", &m.visina);
	printf("Unesi broj grana maline: ");
	scanf("%d", &m.brGrana);
	printf("Unesi broj malina: ");
	scanf("%d", &m.brMalina);
	
	printf("%d\t%d\t%d\n\n", m.visina, m.brGrana, m.brMalina);
	printf("Jesi li zadovoljan?");
	scanf("%s", odg);
	
	system("cls");
	if(!strcmp(odg,"da")){
	printf("Vasa malina je upisana!\n");		
	upisiMojuMalinu(m);
} 	else printf("Vasa malina nije upisana!");

	printf("Vase maline: \n");
	printf("Visina\tbroj grana\tbroj malina\n");
	
	kolkoImamMalina();
	printf("Koju malinu izbrisati?");
	scanf("%d %d %d",&temp.visina,&temp.brGrana,&temp.brMalina);
	brisanje(temp);
	
	
	printf("Aj da jos jednu?");
	scanf("%s",odg);

	
	
	}while(strcmp(odg,"ne"));

}
