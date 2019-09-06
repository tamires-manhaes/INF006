#include <stdio.h>
#include <stdlib.h>

struct aluno{
	int matricula;
	char nome[20];
	float n1, n2, n3;
};

struct elemento{
	struct aluno dados;
	struct elemento *prox;	
};

typedef struct elemento* Lista;

typedef struct elemento Elem;

Lista* criarLista(){
	 
	Lista* li = (Lista* )malloc(sizeof(Lista));
	
	if (li != NULL){
		*li = NULL;
	}
	
	return li;
}

void liberarLista(Lista* li){
	
	// lista valida
	if(li != NULL){
		
		Elem* no;
		
		while( (*li) != NULL){
			
			no = *li;
			*li = (*li)->prox;
			free(no);
		}
		free(li);
	}
}

int tamanhoLista(Lista* li){
	
	int tam = 0;

	// lista valida
	if(li == NULL){
		return 0;
	}
		
	Elem* no = *li;
		
	while( no != NULL){
		
		no = no->prox;
		tam++;
	}	
		
	return tam;
}

int listaVazia(Lista* li){
	
	// lista valida
	if(li == NULL){
		return 1;
	}
	
	// sem conteudo
	if(*li == NULL){
		return 1;
	}
	
	return 0;
	
}

int inserirIniciolista(Lista* li, struct aluno alu){

	// lista valida ?
	if(li == NULL){
		return 0;
	}	
	
	Elem *no = (Elem*)malloc(sizeof(Elem));
	
	// tem memoria ?
	if(no == NULL){
		return 0;
	}
	
	no->dados = alu; // recebe os dados
	no->prox = *li; // aponto o novo no para o proximo da lista
	*li = no; // reposiciona o inicio da lista (ponteiro especial)
	
	return 1;
}

int inserirFinallista(Lista* li, struct aluno alu){

	// lista valida
	if(li == NULL){
		return 0;
	}	
	
	Elem* no = (Elem*)malloc(sizeof(Elem));
	
	if(no == NULL){
		return 0;
	}

	no->dados = alu;
	no->prox = NULL;
	
	// lista vazia. Colocar no inicio
	if((*li) == NULL){ 
		
		*li = no;
		
	} else{
		
		Elem *aux = *li;
		
		while(aux->prox != NULL){
			
			aux = aux->prox;
		}
		aux->prox = no;
	}
	
	return 1;
		
}

int inserirlista(Lista* li, struct aluno alu){

	// lista valida
	if(li == NULL){
		return 0;
	}	
	
	Elem* no = (Elem*)malloc(sizeof(Elem));
	
	if(no == NULL){
		return 0;
	}
	
	no->dados = alu;
	
	// inserir no inicio
	if(listaVazia(li)){
		
		no->prox = (*li);
		*li = no;
		return 1;
		
	} else{
		
		Elem *ant, *atual = *li;
		
		// procurando posicao para inserir
		while(atual != NULL && atual->dados.matricula < alu.matricula){
			
			ant = atual;
			atual = atual->prox;
		}
		
		// inserir no inicio da lista
		if(atual == *li){
			
			no->prox = (*li);
			*li = no;
			
		} else{
			no->prox = ant->prox;
			ant->prox = no;
		}
		
		return 1;
	}
}

int removerInicioLista(Lista* li){
	
	// lista valida
	if(li == NULL){
		return 0;
	}	
		
	// lista vazia	
	if((*li) == NULL){
		return 0;
	}	
	
	Elem *no = *li;
	*li = no->prox;
	
	free(no);
	
	return 1;	
}

int removerFinalLista(Lista* li){
	
	// lista valida
	if((li) == NULL){
		return 0;
	}	
		
	if((*li) == NULL){
		return 0;
	}	
		
	Elem *ant, *no = *li;
	
	// indo para final da lista
	while(no->prox != NULL){
		
		ant = no;
		no = no->prox;
	}
	
	if(no == (*li)){
		*li = no->prox;
	}else{
		ant->prox = no->prox; //retirando ultimo da lista	
	}
	
	free(no);
	
	return 1;
}

int removerDaLista(Lista* li, int matricula){

	// lista valida
	if((li) == NULL){
		return 0;
	}	
		
	Elem *ant, *no = *li;
	
	// procurando elemento
	while(no != NULL && no->dados.matricula != matricula){
		
		ant = no;
		no = no->prox;
	}
	
	if(no == NULL){
		return 0;	
	}	
	
	if(no == *li){
		*li = no->prox;	
	}else{
		ant->prox = no->prox;
	}
	
	free(no);
	
	return 1;
}

void exibirLista(Lista* li){
	
	int posicao = 1;
		
	if(li == NULL){
		printf("Lista nao existe!");
	}
	
	Elem *no = *li;
		
	while( no != NULL){
		
		printf("Posicao: %i , elemento: %i \n", posicao, no->dados.matricula);
		no = no->prox;
		posicao++;
	}
		
}

int main(int argc, char *argv[]) {

	int res, tamanho = 0;
	
	struct aluno al1, al2;
	
	Lista *li;// ponteiro para ponteiro
	
	li = criarLista();
	
	tamanho = tamanhoLista(li);
	
	printf("Tamanho: %i \n", tamanho);
	
	al1.matricula = 1;
	al1.n1 = 5;
	al1.n2 = 5;
	al1.n3 = 5;removido com sucesso!
	
	res = inserirlista(li, al1);
	
	printf("Resp: %i \n", res);

	al2.matricula = 2;
	al2.n1 = 7;
	al2.n2 = 7;
	al2.n3 = 7;
	
	res = inserirlista(li, al2);
	
	printf("Resp: %i \n", res);
	
	tamanho = tamanhoLista(li);
	
	printf("Tamanho: %i \n", tamanho);
	
	exibirLista(li);
			
	return 0;
}



