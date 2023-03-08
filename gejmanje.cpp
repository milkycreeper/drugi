#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdio.h>
 
struct igra{
    char character[50];
    int time;
    int score;
};

void logToCharacter(char character[], int time ){
FILE* filePointer;
strcat(character, ".txt");
filePointer=fopen(character,"r");

int currentPlayTime=0;
fscanf(filePointer,"%d",&currentPlayTime);
fclose(filePointer);

filePointer=fopen(character,"w");

currentPlayTime+=time;
fprintf(filePointer,"%d",currentPlayTime);
fclose(filePointer);
}

void logTime(){
	
int tempTime, tempScore;
char charTemp[50];	
FILE* filePointer;
filePointer=fopen("gejmer.txt","a");
printf("Kojeg charactera si koristio, koji ti je bio play time i koji ti je score? \n");
scanf("%s %d %d",charTemp,&tempTime, &tempScore);

fprintf(filePointer,"%s\t%d\t%d\n",charTemp,tempTime, tempScore);
fclose(filePointer);
logToCharacter(charTemp, tempTime);

}

void maxScore(){
	
	FILE*filePointer;
	filePointer=fopen("gejmer.txt","r");
	int max=0;
	struct igra temp;
	while(fscanf(filePointer,"%s %d %d",temp.character, &temp.time, &temp.score)==3){
		if (temp.score>max){
	 	max=temp.score;
	 	
	 	}
} 
	printf("Max broj bodova u runu je %d\n",max);

fclose(filePointer);
}

void totalTime(){
	
	FILE*filePointer;
	filePointer=fopen("gejmer.txt","r");
	int total=0;
	struct igra temp;
	while(fscanf(filePointer,"%s %d %d",temp.character, &temp.time, &temp.score)==3){
		total+=temp.time;	
} 
	printf("Ukupno vrime je %d\n",total);

fclose(filePointer);
}
	
void mostWanted(){
	
	FILE*filePointer;
	filePointer=fopen("gejmer.txt","r");
	char odg;
	struct igra temp;

	while(fscanf(filePointer,"%s %d %d",temp.character, &temp.time, &temp.score)){
    odg=temp.character;
	printf("Najviše se koristi ovaj karakter %d\n",odg);
}
fclose(filePointer);
}
	
	





int main(){
	
	struct igra g;
	int odg;
	

	
	do{
		printf("\t1. log time\t\n\t2. max score\t\n\t3. Total time played\t\n\t4. Most played character\t\n\t5. Exit\n");
		printf("Molim te koristi brojeve za odabir!!");
		scanf("%d",&odg);

		switch(odg){
			case 1: logTime();
			break;
			case 2: maxScore();
			break;
			case 3: totalTime();
			break;
			case 4: //mostWanted();
			break;
			case 5:
				break;
			default:
				printf("de pise ti od 1 do 5");
		}
		
		
		
		
	} while(odg!=5);
	
	
	
	
	
	
	
	
}
