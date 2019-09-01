#include <stdio.h>

Inserir(int x, posicao *pAtual){
	struct posicao *novo;

	novo = (struct posicao*)malloc(sizeof(struct posicao));
	if(novo == NULL){
		printf("MEM. INSUFICIENTE!\n");
		return 0;
	}
	novo -> valor = x;
	novo -> proximo = pAtual -> proximo;
	novo -> anterior = pAtual;
	
}

