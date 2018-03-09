#include <stdio.h>

int main() {
  int far, cels;
  int top, bottom, step;

  top = 400;
  bottom = -200;
  step = 50;

  far = bottom;
  printf("Far\tCel\n");
  while (far <= top) {
    cels = 5 * (far-32)/9;
    printf("%d\t%d\n", far, cels );
    far = far + step;
  }
}
