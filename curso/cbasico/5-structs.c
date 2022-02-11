#include <stdio.h>
#include <stdlib.h>

struct Node {
  int value;
  struct Node *next;
};

int main() {
  /*struct Node *ejes = malloc(sizeof(struct Punto));
  ejes->x = 6.4;
  ejes->y = 4.4;
  printf("x: %f, y: %f\n", ejes->x, ejes->y);

  free(ejes);*/

  struct Node *head = malloc(sizeof(struct Node));
  head->value = 2;
  head->next = malloc(sizeof(struct Node));
  head->next->value = 43;
  printf("Direccion del primer nodo: %p\n", head);
  printf("Valor del primer nodo: %i\n", head->value);

  printf("Direccion del segundo nodo: %p\n", head->next);
  printf("Valor del segundo nodo: %i\n", head->next->value);
}
