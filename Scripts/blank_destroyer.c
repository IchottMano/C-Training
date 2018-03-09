#include <stdio.h>
#define True 1
#define False 0

int main(void){
  char state;
  long previous, current;
  state = False;
  previous = current = 0;
  while ((current = getchar()) != EOF){
    if ((current != ' ') && state){
      state = False;
      putchar(current);
      previous = current;
      current = 0;
    }
    else if ((current == ' ') && state){
      previous = current;
      current = 0;
    }
    else if ((current == ' ') && !(state)){
      state = True;
      putchar(current);
      previous = current;
      current = 0;
    }
    else {
      putchar(current);
      previous = current;
      current = 0;
    }
  }
}
