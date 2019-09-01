#include <stdio.h>
#include <stdlib.h>
void pegaDiagonal(int *diagonal, int (*matriz)[10], int tam);

/*Outra utilidade da passagem por referência, é quando o resultado
precisa ser armazenado em um vetor:
– Se usássemos uma variável local para o vetor e a retornássemos, ele
seria destruído quando a função (seu escopo) terminasse sua execução.
– Usamos, então, um endereço de um vetor declarado fora da função,
que portanto não seria destruído com o término da função:*/

int main() {
  int matriz[10][10], diagonal[10];

  printf("Inicio\n");

  pegaDiagonal(diagonal,matriz,10);

  printf("Fim\n");
  printf("\n");
  return 0;
}

void pegaDiagonal(int *diagonal, int (*matriz)[10], int tam){
  int i = 0;
  printf("Inicio funcao\n");

  for(i = 0; i < tam; i++){
    diagonal[i] = matriz [i][i];
    printf("%d \n", diagonal[i]);
  }

  printf("Fim funcao\n");
  printf("\n");
}