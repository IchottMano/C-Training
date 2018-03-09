#include <stdio.h>
#define MAX 1000

void copy();
int get_line();

int main(void){
  int len, max;
  char line[MAX], longest[MAX];
  max = 0;
  while ((len = get_line(line, MAX)) > 0){
    if (len > max){
      max = len;
      copy(longest, line);
    }
  }
  if (max > 0){
    printf("%s", longest);
  }
  return 0;
}

int get_line(char s[], int maximum){
  int caracter, barrera;
  for (barrera = 0; barrera <= (maximum - 1) && ((caracter = getchar()) != EOF) && caracter != '\n'; barrera++){
    s[barrera] = caracter;
  }
  if (caracter == '\n'){
    s[barrera] = caracter;
    barrera++;
  }
  s[barrera] = '\0';
  return barrera;
}

void copy(char to[], char from[]){
  int a;
  a = 0;
  while ((to[a] = from[a]) != '\0'){
    a++;
  }
}
