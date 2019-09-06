#include <stdio.h>
#include <stdlib.h>

typedef struct lista {
	int elemento;
	struct lista* prox;
}No;

void menu();
No* criarLista(); 
void insere(No** list, int valor);
void imprimirLista(No* list);
No* busca(No* list, int valor);
No* remover(No* list, int valor);
void liberaLista(No* list);

int main() {
	int sair = 0, opcao;

	struct list * inicio = NULL;
	struct list *novo;
	No* list = criarLista();

	while(!sair) {
		menu();
		scanf("%d", &opcao);
		/*
		printf("1 - Adicionar Elementos");
		printf("2 - Listar Elementos");
		printf("3 - Buscar Elemento");
		printf("4 - Apagar Elementos\n");
		*/
		switch(opcao) {
			case 0: {
				printf("saindo...\n");
				sair = 1;
				break;
			}

			case 1: {
				int valor;
				printf("Inserir Elementos:\n\n");
				printf("Digite valor a ser inserido: \n");
				scanf("%d", &valor);

				insere(&list, valor);
				break;
			}

			case 2: {
				printf("Listando...\n\n");
				imprimirLista(&list);
				break;
			}

			case 3: {
				int busqueValor;
				int achei;
				printf("Buscar elemento: \n\n");
				printf("Digite elemento a ser buscado: \n");
				scanf("%d", &busqueValor);

				achei = busca(&list, busqueValor);
				if(achei == NULL){
					printf("Não encontrado!\n");
				} else {
					printf("Achei!\n");
				}
				break;
			}

			case 4: {
				printf("Remover elementos...\n\n");
				int removaValor;
				int removido;

				printf("Digite valor a ser removido:\n");
				scanf("%d", &removaValor);

				removido = remover(&list, removaValor);
				if(removido != 1){
					printf("Erro ao remover\n");
				} else {
					printf("Removido com sucesso!\n");
				}
				break;
			}

			default: {
				printf("Opcao errada, tente novamente!\n");
				break;
			}
		}
	}

  return 0;
}

No* criarLista () {
	return NULL;
}

void insere(No** list, int valor) {
	No *novo = (No *) malloc(sizeof(No*));
	novo -> elemento = valor;
	novo -> prox = NULL;
	printf("%d\n",novo->elemento);
}

void imprimirLista(No* list) {
	if(list == NULL){
		printf("Lista nao existe!\n");
	}

	No *no = list;
	while(no != NULL){
		printf("elemento: %d\n\n", no->elemento);
		no = no->prox;
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