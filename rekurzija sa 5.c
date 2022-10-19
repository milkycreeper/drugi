#include<stdio.h>

int nes(int a, int n){

	return n<2?a:nes(a*5, --n);
}


int main(){

	int n;


	printf("Unesi neki broj niza: ");
	scanf("%d", &n);


	printf("%d", nes(1,n));

return 0;
}
