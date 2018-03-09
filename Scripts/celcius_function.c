#include <stdio.h>

int main(void){
  int lower, upper, step;
  double to_celcius();
  upper = 300;
  step = 20;
  for (lower = 0; lower <= upper; lower = lower + step){
    printf("%d, %.1f\n", lower, to_celcius(lower));
  }
}

double to_celcius(int temperature){
  return (double)(temperature - 32)*(5.0/9.0);
}
