#include <stdio.h>
#include <math.h>

float rek(int n){
	float trenutniclan=(n*5*pow(-1,n-1))/(3+(n-1)*5);
	return n==1?trenutniclan:trenutniclan*rek(n-1);
}


int main(){

	int n;
	

	printf("Unesi neki broj niza: ");
	scanf("%d", &n);
	
	
	printf("%.2f", rek(n));

return 0;



}
