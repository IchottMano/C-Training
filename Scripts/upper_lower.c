#include <stdio.h>

int main(void){
  char k, new;
  int lower(), upper();
  while ((k = getchar()) != EOF){
    if (k >= 'A' && k <= 'Z'){
      putchar(new = lower(k));
    }
    else if (k >= 'a' && k <= 'z'){
      putchar(new = upper(k));
    }
    else{
      putchar(k);
    }
  }
  return 0;
}

int lower(int c){
  if (c >= 'A' && c <= 'Z'){
    return c + 'a' - 'A';
  }
  else{
    return c;
  }
}

int upper(int c){
  if (c >= 'a' && c <= 'z'){
    return c + 'A' - 'a';
  }
  else{
    return c;
  }
}
