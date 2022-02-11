#include <stdio.h>

int main() {
  // Variables
  int a = 5;
  // Punteros
  int *pointer_a = &a;
  *pointer_a = 123;

  printf("Valor del puntero: %p\n", pointer_a);
  printf("Valor donde apunta el puntero: %i\n", *pointer_a);
}
