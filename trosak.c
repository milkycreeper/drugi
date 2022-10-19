#include<stdio.h>

float minTrosak(int N, float X){   //definicija funkcije
	return N*X;
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
		
		
		
		return 0;
	}
