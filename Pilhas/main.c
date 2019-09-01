#include <stdio.h>

/*Operações: 
 - EMPILHAR(push) = colocar na PILHA
 - DESEMPILHAR(pop) = retirar da PILHA
 Com a lógica de LIFO: LAST IN FIRST OUT
*/

/*
PILHA com lista encadeada coloca o início como topo e pega o primeiro elemento da lista no push e no pop
*/
					 
int main(void) {
	int N;
  int PILHA[N];
	int *topo;
	int elemento;

	topo = 0;

  return 0;
}

void Push(int PILHA[], int v, int *topo, int N){
	if(*topo < N){
		PILHA[*topo] = v;
		*topo = *topo + 1;
	}
	else
		printf("OVERFLOW!\n");
}

void Pop(int PILHA[], int *topo){
	if(*topo > 0)
		*topo = *topo - 1;
	else
		printf("UNDERFLOW!\n");
		*topo = *topo - 1;
}