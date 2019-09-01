#include <stdio.h>
#include <stdlib.h>
void x(int *y);

int main() {
  int a = 0;
	printf("antes da funcao : %d\n", a);

	int *a_ptr = &a;

	x(a_ptr);

	printf("depois da funcao : %d\n", a);

  return 0;
}

void x(int *y){
	*y = 2;
}