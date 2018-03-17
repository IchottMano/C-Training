#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>


static void handler(int foo){
  printf("Interrupción");
  exit(0);
}

int main(int argc, char const *argv[]){ /* argc es la cantidad de inputs */
  signal(SIGINT, handler); /* SIGINT es CTRL+C */
  return 0;
}
