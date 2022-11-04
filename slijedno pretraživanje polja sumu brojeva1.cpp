#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Trazi(int A[], int n){
	int i;
	for(i=0;i<n;i++)
			if(A[i]>A[0]+A[1])
				return i;
	return -1;
}

int main(){
	
	int x[10];
	int n=0,i;
	time_t t;
	int y[10];
	
	srand((unsigned) time(&t));
	
	while(n>10||n<3){
		
		printf("\nUpisi broj elemenata polja [3,10]");
		scanf("%d",&n);
		
	}
	for( i = 0 ; i < n ; i++ ) {
      x[i]=rand() % 13;
   }
    for( i = 0 ; i < n ; i++ ) {
      printf("%d\t",x[i]);
   }
   
	printf("\n\n");
	
	   int a=Trazi(x,1);
   for( i = a ; i < n ; i++ ) {
   		y[i-a]=x[i];
   }
   
   for( i = a ; i < n ; i++ ) {
   	printf("\n%d", y[i-a]);
  
   }
		
	
	
}
