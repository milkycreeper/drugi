#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* ptr;
	int n, i;
	n=5;
	printf("Unesi broj elementa:%d\n", n);
	
	ptr = (int*)calloc(n, sizeof(int));
	if(ptr==NULL){
		printf("Memorije nije alocirana.\n");
		exit(0);
	}
	free(ptr);
	for(i=0; i<n; i++)
	{
		printf("\n%d", ptr[i]);
	}
	
	
	}
