#include <stdio.h>

int main(){
  int far;
  for (far = 300; far >= -200; far = far - 50)
      printf("%3d\t%6.1f\n", far, (5.0/9.0)*(far - 32));
}
