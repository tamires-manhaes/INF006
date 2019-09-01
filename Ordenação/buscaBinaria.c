#include <stdio.h>
#include <stdlib.h>
int buscaBinaria(int A[], int inicio, int fim, int valor);

int main() {
  int V[]={1,2,3,4,5,6,7,8};
  int result;

  result = BB(&V[7],1,7,2);
  printf("%d\n", result);
  return 0;
}

int buscaBinaria(int A[], int inicio, int fim, int valor){
  int meio;

  while(inicio <= fim){
    meio = (inicio + fim)/2;
    if(A[meio] == valor)
      return meio;
      else if(A[meio] < valor)
              inicio = meio + 1;
              else
                fim = meio -1;
  }
  return -1;
}