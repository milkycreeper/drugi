#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Trazi(int A[], int n){
	int i;
	for(i=0;i<n;i++)
			if(A[i]>=8&&A[i]<=10)
				return i;
	return -1;
}



int main(){
	
	int x[50];
	int i, n;
	time_t t;
	
	srand((unsigned) time(&t));
	
	scanf("%d",&n);
	
	
	for( i = 0 ; i < n ; i++ ) {
      x[i]=rand() % 100;
   }
   
   for( i = 0 ; i < n ; i++ ) {
      printf("%d\t",x[i]);
   }
	printf("\n%d", Trazi(x, n));
	
	
}
