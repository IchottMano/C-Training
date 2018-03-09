#include <stdio.h>
#define LOWER -200
#define UPPER 300
#define STEP 50


int main(){
  int far;
  for (far = UPPER; far >= LOWER; far = far - STEP)
      printf("%3d\t%6.1f\n", far, (5.0/9.0)*(far - 32));
}
