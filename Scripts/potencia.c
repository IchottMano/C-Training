#include <stdio.h>

int main(){
  int a;
  for (a = 0; a <= 10; a++){
    printf("%d, %d, %d\n", a, power(2, a), power(-3, a));
  }
  return 0;
}

int power(int base, int expo){
  int counter, returned;
  returned = 1;
  for (counter = 0; counter <= expo; counter++){
    returned = returned * base;
  }
  return returned;
}
