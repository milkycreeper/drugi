#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct zvizda{
	int stup;
	int boja;
	int vel;
	int tok;
	int udalj;
}z[3];

int main(){
	
	for(int i=0;i<3;i++){
		printf("Unesi kolike je temp zvizda.\n");
		scanf("%d", &z[i].stup);
		printf("Unesi koje je boje zvijezda.\n\t0-zuta\n\t1-plava\n\t2-zelena\n\t3-crvena\n");
		scanf("%d", &z[i].boja);
		printf("Unesi kolika je velicina zvizde.\n");
		scanf("%d", &z[i].vel);
		printf("Unesi koliki je svjetlosni tok zvizde.\n");
		scanf("%d", &z[i].tok);
		printf("Unesi kolika je udaljenost zvizde.\n");
		scanf("%d", &z[i].udalj);
}
	
float a=z[0].stup/z[0].udalj;
	printf("%.2f", a);
float b=z[1].stup/z[1].udalj;
	printf("%.2f", b);
float c=z[2].stup/z[2].udalj;
	printf("%.2f", c);
	
	float k=0.000069/152000000;
		printf("%.2f", k);
	
	if (abs(a-k)<abs(b-k)&&abs(a-k)<abs(c-k)){
		printf("Zvizda 0 je najbolja!!\n");
		printf("Boja zvizde je:\n ");
		printf(z[0].boja==0?"zuta\n":z[0].boja==1?"plava\n":z[0].boja==2?"zelena\n":"crvena\n");
		printf("Vel zvizde je:%d.\n",z[0].vel);
		}
	else if(abs(b-k)<abs(a-k)&&abs(b-k)<abs(c-k)){
		printf("Zvizda 1 je najbolja!!\n");
		printf("Boja zvizde je: \n");
		printf(z[1].boja==0?"zuta\n":z[1].boja==1?"plava\n":z[1].boja==2?"zelena\n":"crvena\n");
		printf("Vel zvizde je:%d.\n",z[1].vel);
	}
	else 
		printf("Zvizda 2 je najbolja!!\n");
		printf("Boja zvizde je:\n ");
		printf(z[2].boja==0?"zuta\n":z[2].boja==1?"plava\n":z[2].boja==2?"zelena\n":"crvena\n");
		printf("Vel zvizde je:%d.\n",z[2].vel);
}















