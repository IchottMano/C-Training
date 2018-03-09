#include <stdio.h>

int main() {
  float far, cels;
  float top, bottom, step;

  top = 400.0;
  bottom = -200.0;
  step = 50.0;

  far = bottom;
  printf("Far\tCel\n");
  while (far <= top) {
    cels = 5.0 * (far-32.0)/9.0;
    printf("%3.0f\t%6.1f\n", far, cels );
    far = far + step;
  }
}
