#include <stdio.h>
#include <stdlib.h>
#include "moduloFuncoes.h"

No* criarLista () {
	return NULL;
}

int insere(No* list, int valor) {
	if(list == NULL) return 0;
	No* no = (No*) malloc(sizeof(No));
	if(no == NULL) return 0;
	no -> elemento = valor;
	no -> prox = list;

	return no;
}

void imprimirLista(No* list) {
	if(list == NULL){
		printf("Lista nao existe!\n");
	}

	while(list != NULL){
		printf("elemento: %d\n\n", list->elemento);
		list = list->prox;
	}
}

No* busca(No* list, int valor){
	No* lista;
	for (lista = 1; lista != NULL; lista->prox){
		if(lista->elemento == valor){
			return lista;
		}

		return NULL;
	}
}

No* remover(No* list, int valor) {
	No* anterior = NULL;
	No* lista = list;

	while(lista != NULL && lista->elemento != valor) {
		anterior = lista;
		lista = lista->prox;
	}

	if(lista == NULL){
		return 1;
	}

	if(anterior == NULL){
		list = lista->prox;
	} else {
		anterior->prox = lista->prox;
	}
	free(lista);
	return 1;
}

void liberaLista(No* list) {
	No* lista = list;

	while(lista != NULL){
		No* temp = lista->prox;
		free(lista);
		lista = temp;
	}
}

void menu() {
	printf("0 - sair\n");
	printf("1 - Adicionar Elementos\n");
	printf("2 - Listar Elementos\n");
	printf("3 - Buscar Elemento\n");
	printf("4 - Apagar Elementos\n");
	printf("Digite opcao desejada: ");
}
