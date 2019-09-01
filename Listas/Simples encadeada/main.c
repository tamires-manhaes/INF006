#include <stdio.h>
#include <stdlib.h>

void menu();

struct lista {
	int valor;
	struct lista *prox;
};

int main() {

	struct lista * inicio = NULL;
	struct lista *novo;
	int valor, val;
	int sair = 1, opcao;

	while(!sair){
		menu();
	}

	printf("Digite elemento a ser adicionado na lista: ");
	scanf("%d", &valor);

	novo = (struct lista*)malloc(sizeof(struct lista));
	novo->valor = val;
	novo->prox = inicio;
	inicio = novo;
  
  return 0;
}

void menu() {
	printf("0 - sair");
	printf("1 - Adicionar Elementos");
	printf("2 - Apagar Elementos");
	printf("3 - Definir quantidade de elementos");
	printf("Digite opcao desejada: ");
}