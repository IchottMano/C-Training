#include <stdio.h>
#include <stdlib.h>

int main(void){
  int* numeros = calloc(3, sizeof(int));
  numeros[0] = 50;
  numeros[1] = 51;
  numeros[2] = 52;

  for (int i = 0; i < 3; i++){
    printf("%i\n", numeros[i]);
  }
  printf("%p\n", numeros);
  free(numeros);
}
