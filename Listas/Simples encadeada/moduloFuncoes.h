#include <stdio.h>

typedef struct lista {
	int elemento;
	struct lista* prox;
}No;

void menu();
No* criarLista(); 
int insere(No* list, int valor);
void imprimirLista(No* list);
No* busca(No* list, int valor);
No* remover(No* list, int valor);
void liberaLista(No* list);