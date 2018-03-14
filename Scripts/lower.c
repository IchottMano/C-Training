#include <stdio.h>

int main(void){
  char c;
  while ((c = getchar()) != EOF){
    printf("%c", ((c >= 'A') && (c <= 'Z')) ? (char)(c - 'A' + 'a') : (char)c);
  }
}
