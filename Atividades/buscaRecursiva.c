#include <stdio.h>
#include <stdlib.h>
/*	
	CRIADO POR: Tamires Pimenta Manhães 
	DATA: 11/02/2019
	Instituto Federal de Ciência e Tecnologia 
	CURSO: Análise e Desenvolvimento de Sistemas
	DISCIPLINA: EStrutura de Dados - Prática
	PROBLEMA: Cadastre um vetor de 20 posições e faça uma busca por um elemento utilizando recursividade
*/

int BuscarValor(int V*, int valor, int tam);

int main(){
	int vetor[20];
	int contador;
	int buscar;

	printf("Digite valores... ");
	printf("\n");
	for(contador = 0; contador < 20; contador++){
		scanf("%d", &vetor[contador]);
	}

/*
	int temp;
	printf("Imprimindo vetor: \n");
	for(temp = 0; temp < 20; temp++){
		printf("%d\n", vetor[temp]);
	}
*/


	return 0;
}

int BuscarValor(int V*, int valor, int tam){
	int temporaria = -1;

	if ((tam < 20 ) && (V[tam] != valor)){ // pára se o vetor acabar de ser percorrido OU 
		temporaria = BuscarValor(V, valor ,tam + 1); // começando da posição 0 e incrementando 
	} else {
		return tam;
	}
}