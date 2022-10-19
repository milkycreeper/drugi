#include<stdio.h>

float minTrosak(int N, float x){   //definicija funkcije
	return N*x;
}
/*float minTrosak2(int N, float x=15.99){  //x ima zadani argument
	return N*x;
}*/
void minTrosak3(int *N, float *x, float *rez){
	*rez=*N * *x;
	
}




	int main(){
		int brPrijatelja;
		float cijena, trosak;
		
		printf("Unesi broj prijatelja: ");
		scanf("%d", &brPrijatelja);
		printf("Unesi cijenu pretplate: ");
		scanf("%f", &cijena);
		
		trosak=minTrosak(brPrijatelja, cijena);    //poziv funkcije
		printf("Ukupni trosak iznosi %.2f novaca", trosak);
		//trosak=minTrosak2(brPrijatelja);    //poziv funkcije
		//printf("\nUkupni trosak iznosi %.2f novaca", trosak);
		minTrosak3(&brPrijatelja, &cijena, &trosak);
		printf("\nUkupni trosak iznosi %.2f novaca", trosak);
		
		
		return 0;
	}
