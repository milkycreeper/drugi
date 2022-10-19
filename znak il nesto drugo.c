#include <stdio.h>

void znak(char z) {

  if (z >= 'a' && z <= 'z')
    printf("\nUčitano je malo slovo");
  else if (z >= 'A' && z <= 'Z') 
    printf("\nUčitano je veliko slovo");
  else if (z >='0' && z <= '9')
    printf("\nUčitana je brojka");
  else  
    printf("\nNije učitano slovo niti brojka");

  return;
}

void main() {
  char zn;
	
  printf("\n Učitaj znak: ");
  scanf(" %c", &zn);

  while (zn != '0') {
    znak(zn);
		
    printf("\n Učitaj znak: ");
    scanf(" %c", &zn);  
    }

	return;
}
