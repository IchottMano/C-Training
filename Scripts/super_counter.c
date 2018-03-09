#include <stdio.h>

int main(void){
  long tabs, blanks, newlines;
  int character;
  tabs = 0;
  blanks = 0;
  newlines = 0;
  while ((character = getchar()) != EOF){
    if (character == '\t'){
      tabs++;
    }
    else if (character == '\n'){
      newlines++;
    }
    else if (character == ' '){
      blanks++;
    }
  }
  printf("%ld tabs, %ld blanks, %ld newlines\n", tabs, blanks, newlines);
  return 0;
}
