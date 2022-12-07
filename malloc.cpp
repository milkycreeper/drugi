#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* ptr;
	int n, i;
	
	printf("Unesi broj elementa:");
	scanf("%d", &n);
	printf("Uneseni brojevi od elemenata: %d\n", n);
	ptr = (int*)malloc(n*sizeof(int));
	
	for(i=0; i<n; i++)
	{
	printf("Unesi %d broj:", i);
	scanf("%d", &ptr[i]);
	}
	
	for(i=0; i<n; i++)
	{
		printf("\n%d", ptr[i]);
	}
	
	free(ptr);
	printf("\nnakon free\n");
		for(i=0; i<n; i++)
	{
		printf("\n%d", ptr[i]);
	}
}
