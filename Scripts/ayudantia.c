#include <stdio.h>
#include <stdlib.h>

/* Struct */

struct Humano {
  int Edad;
  char Nombre[30];
};
typedef struct Humano Persona;
Persona p;
p.Edad = 21;
strcpy(p.nombre, "Juanito");

/* Memory Allocation */

malloc(size); /* Reserva size memoria y retorna el puntero a la direccion */

calloc(n, item_size); /* Reserva n espacios de memoria de tamaño item_size
e inicializa el contenido de cada posición*/

realloc(item, m*item_size); /* Cambia las dimensiones del arreglo item a m */

/* Ejemplo hola */

Persona** personas_1 = malloc(10*sizeof(Persona*))
Persona** personas_2 = calloc(10, sizeof(Persona*))
/* Ambos ejemplos crean un arreglo de 10 personas */

personas_2 = realloc(personas_2, 100*sizeof(Persona*)) /* Aumento 100 personas */

free(item) /* Libera la memoria ocupada por item */
/* Para dar cuenta de perdidas de memoria existe el comando valgrind */
/* valgrind ./ejecutable */

/* Punteros */

int* numeros = calloc(3, sizeof(int));
numeros[0] = 50;
numeros[1] = 51;
numeros[2] = 52;

for (int i = 0; i < 3; i++){
  printf("%i\n", numeros[i]);
}
printf("%p\n", numeros);
