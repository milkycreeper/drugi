#include <stdio.h>

void zbroj(int x, int y) {
	int zbr=0, br, i;

	for(i=x; i<=y; i++)
		zbr=zbr+i;
	
	printf("\nZbroj brojeva izmedu ova dva broja je: %d", zbr);

	return;
}

void main()
	{
	int a,b;

	printf("\nUnesi dva broja: ");
	scanf("%d %d", &a, &b);

	zbroj(a, b);
	
	return;
}
