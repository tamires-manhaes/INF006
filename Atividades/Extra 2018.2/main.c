#include <stdio.h>
#include <stdlib.h>

typedef  struct no* Arvore;

struct no {
	struct no *direita;
	int valor;
	struct no *esquerda;
};

Arvore* raiz;

int main(void) {
	Arvore* raiz = cria_Arvore();
  printf("Hello World\n");

  return 0;
}

Arvore* cria_Arvore(){
	Arvore* raiz = (Arvore*) malloc(sizeof(Arvore));
	if(raiz != NULL)
		*raiz = NULL;
	return raiz;
}



struct no* insere_no(Arvore* raiz, int valor){
	if(raiz == NULL)
		return 0;
	struct no* novo;
	novo = (struct no*)malloc(sizeof(struct no));
	if(novo == NULL)
		return 0;
	novo->valor = valor;
	novo->direita = NULL;
	novo->esquerda = NULL;

	if(*raiz == NULL)
		*raiz = novo;
	else {
		struct no* atual = *raiz;
		struct no* anterior = NULL;
		while(atual != NULL){
			anterior = atual;
			if(valor == atual->valor){
				free(novo);
				return 0;
			}
			if(valor > atual->valor)
				atual = atual->direita;
			else
				atual = atual->esquerda;
		}
		if(valor > anterior->valor)
			anterior->direita = novo;
		else
			anterior->esquerda = novo;
	}
	return -1;
}

struct no* remove_atual (struct no* atual){
	struct no *no1, *no2;
	if(atual->esquerda == NULL){
		no2 = atual->dir;
		
	}
}

struct no* remover_no(Arvore *raiz, int valor){
	if(raiz == NULL)
		return 0;
	struct no* anterior = NULL;
	struct no* atual = *raiz;
	while( atual != NULL){
		if (valor == atual->valor){
			*raiz = remove_
		}
	}
}

