#include <stdio.h>

unsigned set_bits(unsigned x, unsigned y, int a, int b){
  unsigned x2, y2;
  x2 = (~((~0 << a) & ~(~0 << (a+b)))) & x;
  y2 = ((~(~0 << b)) & y) << (a+b);
  return x2 | y2;
}

unsigned invert(unsigned x, int a, int b){
  return ((~0 << a) & ~(~0 << (a+b))) ^ x;
}

unsigned short rotate_right(unsigned x){
  return (((~0 << 15) & x) >> 15) | (x << 1);
}

unsigned rightrot(unsigned x, int a){
  int counter = 0;
  unsigned short result = x;
  while (counter < a){
    result = rotate_right(result);
    counter++;
  }
  return result;
}

int main(void){
}
