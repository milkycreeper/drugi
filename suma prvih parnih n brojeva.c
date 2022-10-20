#include <stdio.h>
 
int suma_paran(unsigned n) {
    if(n == 2)      // ponavljanje do granicne vrijednosti parnih brojeva?
        return 2;   // posljednji paran 2
 
        if(n % 2 == 0)       // k parno?
            return n + suma_paran(n - 1);  // formira sumu i poziv iste funkcije sa umanjemnim n za 1
        else
            return suma_paran(n - 1);      // poziv iste funkcije sa umanjemnim n za 1
}
 
int main () {
    printf("Suma parnih brojeva do n - Rekurzija\n");
    int broj_n;
 
    printf("Broj: ");      // ulazne vrijednosti
    scanf("%d",&broj_n);
 
    printf("Suma parnih brojeva od 1 do %d je %d", broj_n, suma_paran(broj_n));  // ispis vrijednosti ulzne  varijabli
    return 0;
}
