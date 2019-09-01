#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Hello Ponteiros!\n");
    int i = 2;
    int *p = &i;

    printf("Endereço de i = %p\n", p);
    printf("Valode de i = %d\n", *p);
    
  return 0;
}