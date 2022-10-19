#include <stdio.h>

int pobjednik(int a, int b){
	return (a+b)%2;
}

int main(){
	
	int a;
	int b;
	
	printf("Koliko je Tatjana pokazala prstiju? ");
	scanf("%d", &a);
	printf("\nKoliko je Zvonka pokazao prstiju? ");
	scanf("%d", &b);
	
	printf(pobjednik(a,b)?"Tatjana":"Zvonimir");
}
