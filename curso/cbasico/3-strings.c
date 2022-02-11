#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // Sintaxis para crear una cadena
  char c[] = {'H', 'e', 'l', 'l', 'o', '\0'};
  // Usando puntero
  char *b = malloc(sizeof(char) * 6);
  strcpy(b, "Hell");
  printf("%s\n", c);
  printf("%s\n", b);

}
