#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void squeeze(char s[], char c){
  char *new;
  int i, j;
  for (i = j = 0; s[i] != '\0'; i++){
    if (s[i] != c){
      s[j++] = s[i];
    }
  }
  s[j] = '\0';
  new = (char *) malloc(sizeof(char)*(j+1)); /* This is for freeing memory */
  strcat(new, s);
  s = new;
  free(new);
}

void super_squeeze(char k[], char r[]){
  int x, y;

  for (x = y = 0; r[y] != '\0'; y++){
    squeeze(k, r[x++]);
  }
}

int main(void){
  char inp[1000], inp2[50];
  printf("Input strings:\n");
  scanf("%s\n%s", inp, inp2);
  super_squeeze(inp, inp2);
  printf("%s\n", inp);
}
