#include <stdio.h>

int main(void){
  long character, whites, others, position;
  long digits[10];
  whites = others = 0;

  for (position = 0; position < 10; position++){
    digits[position] = 0;
  }

  while ((character = getchar()) != EOF){
    if ((character >= '0') && (character <= '9')){
      digits[character - '0']++;
    }
    else if ((character == '\t') || (character == ' ')){
      whites++;
    }
    else {
      others++;
    }
  }
  printf("Digits: ");
  for (position = 0; position < 10; position++){
    printf("%ld ", digits[position]);
  }
  printf("\n");
  printf("Whites: %ld\nOthers: %ld\n", whites, others);
}
