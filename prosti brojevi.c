#include <stdio.h>

void prostbroj(int a) {
	int i, br=0;

	for(i=2; i<=a/2; i++)
		if(a%i==0)
			br++;

	if(br==0)
		printf("\nBroj je prost ");
	else 
		printf("\nBroj nije prost ");

	return;
}

void main () {
	int a;

	printf ("\nUnesi broj: ");
	scanf("%d", &a);

	prostbroj(a);
	
	return;
}
