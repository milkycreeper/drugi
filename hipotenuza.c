#include <stdio.h>
#include <math.h>

float hipotenuza(float a, float b) {
	float c;

	c = sqrt(a*a + b*b);

	return c;
}

void main() {
  float str_a, str_b, hipo;

  printf("\n Učitaj obje katete: "); 
  scanf("%f %f", &str_a, &str_b);

  hipo = hipotenuza(str_a, str_b);

  printf("Hipotenuza je %.2f", hipo);

  return;
}
