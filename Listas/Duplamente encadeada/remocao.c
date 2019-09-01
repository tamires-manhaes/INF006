#include <stdio.h>

Remover(posicao *pRetirar){
	posicao *ant;
	posicao *prox;
	ant = pRetirar -> anterior
	prox = pRetirar -> proximo;
	ant -> proximo = proximo;
	proximo -> anterior = anterior;
	free(pRetirar);

}