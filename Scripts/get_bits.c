#include <stdio.h>

int main(void){
  unsigned getbits();
  printf("%u\n", getbits(127, 4, 4));
}

unsigned getbits(unsigned x, int p, int n){
  return (x >> (p+1-n)) & ~(~0 << n);
}
