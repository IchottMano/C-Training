#include <stdio.h>

int main(void){
  long count, character;
  count = 0;
  while ((character = getchar()) != EOF){
    if (character == '\n'){
      count++;
    }
  }
  printf("%ld\n", count);
  return 0;
}
