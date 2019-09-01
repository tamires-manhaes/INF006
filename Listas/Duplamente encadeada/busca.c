#include <stdio.h>

Busca(int x, posicao *pInicio){
	struct posicao *busca;
	busca = pInicio;

	if(busca -> valor == x){
		printf("Achei!!");
	}
	else
		busca = busca -> proximo;

		while(busca != pInicio){
			if(busca -> valor == x){
				printf("Achei\n");
				break;
			}
			busca = busca -> proximo;
		}
}