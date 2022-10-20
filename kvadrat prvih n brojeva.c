#include <stdio.h>
 
int suma(int n) {
    if(n == 1)     // ponavljanje do granicne vrijednosti ulazne varijable?
        return 1;  // kraj rekurzije
    return n*n  + suma(n -1);    // povratne vrijednost i poziv iste funkcije sa umanjenim n za 1
}
 
int main () {
    printf("Suma kvadrata prvih n brojeva . Rekurzija\n");
    int broj_n, s;
 
    printf("Broj: ");      // ulazne vrijednosti
    scanf("%d",&broj_n);
 
    s = suma(broj_n);       // poziv funkcije suma
 
    printf("Suma kvadrata brojeva od 1 do %d je %d", broj_n, s);     // ispis vrijednosti ulaznih i izlaznih varijabli
    return 0;
}
