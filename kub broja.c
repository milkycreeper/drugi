#include <stdio.h>

int kub(int x) {
	int rez;

	rez = x*x*x;

	return rez;
}

void main() {
	int a, k;

	printf("\nUpiši broj: ");
	scanf("%d", &a);

	k = kub(a);

	printf("\nKub broja %d je %d.", a, k);

	return;
}
