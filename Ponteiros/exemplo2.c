#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, c;
  int *p;
  int *q;

  printf("Valor de A: ");
  scanf("%d", &a);

  printf("Valor de B: ");
  scanf("%d", &b);

  p = &a;
  q = &b;

  c = *p + *q;

  printf("Valor de C = %d", c);
  printf("\n");

  return 0;
}