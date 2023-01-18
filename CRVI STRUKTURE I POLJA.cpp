#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

struct crvic{
	char ime[50];
	int dulj;
	char hrana[50];
	char ubojica[3];
};

void ispisi(struct crvic c[]){
	
	int i,j,min_idx;
	struct crvic temp;
	
	for(i=0;i<4;i++){
		min_idx=i;
		for(j=i+1;j<5;j++)
			if(c[j].dulj<c[min_idx].dulj)
		min_idx=j;
		
		temp=c[min_idx];
		c[min_idx]=c[i];
		c[i]=temp;
	}
	for(i=0;i<4;i++)
		printf("%s,\t %s,\t %s\t, %d\n", c[i].ime, c[i].hrana, c[i].ubojica, c[i].dulj);
	
}

int main(){
	
	struct crvic c[5]={"mirko", 50, "trava", "DA", 
						"milica", 30, "blato", "NE",
						"ivica", 40, "kruh", "DA",
						"darko", 20, "list", "NE"};
	
	printf("Unesi ime crva: \n");
	scanf("%s", c[4].ime);
	printf("Unesi duljinu crva: \n");
	scanf("%d", &c[4].dulj);
	printf("Unesi omiljenu hranu crva: \n");
	scanf("%s", c[4].hrana);
	printf("Moze li ubiti svinju? \n");
	scanf("%s", c[4].ubojica);
	
	ispisi(c);
	
	
	
	
	
	
	
	
	
	
	
	
}













