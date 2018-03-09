#include <stdio.h>

int main(void){
  long character;
  while ((character = getchar()) != EOF){
    if (character == ' ' || character == '\t'){
      printf("\n");
    }
    else {
      putchar(character);
    }
  }
}
