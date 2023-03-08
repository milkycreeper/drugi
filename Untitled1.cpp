#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct game{
char character;
int time_to_complete;
int score;
};
void logTime (struct game ga){

FILE*filePointer;
filePointer=fopen("game.txt","a");

fprintf(filePointer,"%s\t%d\t%d\n",ga.character,ga.time_to_complete,ga.score);
fclose(filePointer);
//logToCharacter(character);

}
void max_score(struct game ga){
FILE*filePointer;
filePointer=fopen("game.txt","r");
int max=0;
int score;
struct game temp;
score=temp.score;
while(fscanf(filePointer,"%s %d %d",temp.character, &temp.time_to_complete, &temp.score)){
	if (score>max){
	 max=temp.score;
printf("Ukupan broj bodova je %d\n",max);
}
} 
fclose(filePointer);
}
void total_time(struct game ga){
FILE*filePointer;
filePointer=fopen("game.txt","r");
int sum=0;
int a,s,c;
struct game temp;

while(fscanf(filePointer,"%s %d %d",temp.character, &temp.time_to_complete, &temp.score)){
	sum+=temp.time_to_complete;
printf("Ukupan vrijeme je %d\n",sum);

}
fclose(filePointer);
}
void most_used_character(struct game ga){
FILE*filePointer;
filePointer=fopen("game.txt","r");
char odg;
int a,s,c;
struct game temp;

while(fscanf(filePointer,"%s %d %d",temp.character, &temp.time_to_complete, &temp.score)){
    odg=temp.character;
printf("Najviše se koristi ovaj karakter %d\n",odg);
}
fclose(filePointer);
}


int main()
{
	printf("Kojeg karkatera si koristio, koje vrijeme igranja, i koliki ti je score");
scanf("%s\t%d\t%d\n",ga.character,ga.time_to_complete,ga.score);
    int i;
    char odg[5];
    struct game ga;

    do{
    printf("unesi karakter, vrijeme da rijesi i koliko bodova \n");
    scanf("%s %d %d",ga.character, &ga.time_to_complete, &ga.score);
    logTime(ga);
    total_time(ga);
    printf("Ocemo opet??");
    scanf("%s",odg);
    }while(strcmp(odg,"ne"));
    return 0;


}
