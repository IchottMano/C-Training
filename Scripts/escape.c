#include <stdio.h>

int main(void){
  char c, prev = 0;
  void escape(char), undo_escape(char, char);
  printf("Input to de-escape:\n");
  while ((c = getchar()) != '\n'){
    undo_escape(c, prev);
    prev = c;
  }
  printf("Input to escape:\n");
  while ((c = getchar()) != EOF){
    escape(c);
  }
  printf("\n");
}

void escape(char a){
  switch (a) {
    case '\n':{
      printf("\\n");
      break;
    }
    case '\t':{
      printf("\\t");
      break;
    }
    default:{
      printf("%c", a);
      break;
    }
  }
}

void undo_escape(char a, char last_char){
  if ((a != '\\') && (last_char == '\\')){
    switch (a) {
      case 'n':{
        printf("\n");
        break;
      }
      case 't':{
        printf("\t");
        break;
      }
    }
  }
  else if (a != '\\'){
    printf("%c", a);
  }
}
