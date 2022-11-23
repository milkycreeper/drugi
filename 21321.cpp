#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void minmax(int arr[],int *min,int *max, int n){
int temp;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++)
		if(arr[j]>arr[j+1]){
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
	}
}
*min=arr[0];
*max=arr[5];
}
int main(){
	
int a[6], min, max, i;	
	
	printf("Unesi brojeve polja: ");
	for(i=0;i<6;i++) 
		scanf("%d",&a[i]);
 minmax(a,&min,&max,6);
printf("%d",min);
printf("\n%d",max);

return 0;

}
