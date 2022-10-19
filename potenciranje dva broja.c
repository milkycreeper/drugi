#include <stdio.h>

int potenciranje(int x, int y) {
	int i, rez;

	rez=x;

	if(y==0)
		rez=0;

	for(i=1; i<y; i++)
		rez=rez*x;

	return rez;
}

void main() {
	int a, b, pot;

	printf("\nUnesite broj za potenciranje i njegovu potenciju: ");
	scanf("%d %d", &a, &b);

	pot = potenciranje(a, b);

	printf("\nDobiveni potencija je: %d", pot);

	return;
}
