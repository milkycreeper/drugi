#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void dslt (int a,int b,int n,int *jel,float *ab)
{
	if(n>0){
	
		if(a>b){
			*jel=1;
				*ab=a*b;}
		else if(a<b){
			*jel=-1;
			*ab=(float)a/b;}
		else{
			*jel=0;
			*ab=(float)a/b;
	}}
	
	else if(n==0){
		*jel=0;
		*ab=(float)a/b;
		
	}
	else{
	
		if(a<b){
			*jel=1;
				*ab=a*b;}
		else if(a>b){
			*jel=-1;
			*ab=(float)a/b;}
		else{
			*jel=0;
			*ab=(float)a/b;
	}}

}


int main(){
		
    int a;
    int b;
    int n;
    int jeli;
    float ab;
    printf("unesi broj\n");
    scanf("%d",&a);
     printf("unesi broj\n");
    scanf("%d",&b);
     printf("unesi broj\n");
    scanf("%d",&n);
    nes(a,b,n,&jeli,&ab);
    printf("%d\n", jeli);
    printf("%.2f\n", ab);											
}
