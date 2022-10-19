#include <stdio.h>

float maksimum(int a) {
  int m, s, d, j;
	
  s = a / 100;
  d = (a % 100) / 10;
  j = (a % 100) % 10;

  m = s;

  if (m < d)
    m = d;

  if (m < j)
    m = j;

  return m;
}

void main() {
  int broj, max;
  float ars;

  printf("\n Učitaj troznamenkasti broj: ");
  scanf("%d", &broj);

  max = maksimum(broj);

  printf("Najveća znamenki broja %d je %d", broj, max);

  return;
}
