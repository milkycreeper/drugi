#include <stdio.h>
 
int suma(int n) {
    if(n == 1)     // ponavljanje do granicne vrijednosti ulazne varijable?
        return 1;  // kraj rekurzije
    else return n + suma(n -2);   // poziv iste funkcije, n umanjen za 2
}
 
int main () {
    printf("Suma prvih n neparnih prirodnih brojeva. Rekurzija\n");
    int broj, s;
 
    printf("Broj: ");      // ulazne vrijednosti
    scanf("%d",&broj);
 
    s = suma(2 * broj - 1);       // poziv funkcije suma
 
    printf("Neparni brojevi do %d imaju sumu %d", 2*broj-1, s);     // ispis vrijednosti ulaznih i izlaznih varijabli
    return 0;
}
