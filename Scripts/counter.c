#include <stdio.h>

int main(void){
  long ng;

  ng = 0;

  while (getchar() != EOF){
    ++ng;
  }
  printf("%ld\n", ng);
}
