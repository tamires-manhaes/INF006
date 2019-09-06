#include <stdio.h>
#include <stdlib.h>
#include "moduloFuncoes.h"

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

