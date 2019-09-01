#include <stdio.h>

/*
OPERAÇÕES: 
 - ENFILEIRAR (ENQUEUE)
 - DESENFILEIRAR (DEQUEUE)
Segue a lógica de FIFO : FIRST IN FIRST OUT
*/

int main(void) {
	int N;
	int FILA[N];
	int *inicio = 0;
	int *fim = 0;

  return 0;
}

void Enqueue(int FILA[], int *fim, int v, int N){
	if(*fim < N){
		FILA[*fim] = v;
		*fim = *fim + 1;
	}
	else
		printf("OVERFLOW!\n");
}

void DEQUEUE(int FILA[], int *inicio, int *fim){
	if(*inicio != *fim)
		*inicio = *inicio + 1;
	else
		printf("UNDERFLOW!\n");
}
