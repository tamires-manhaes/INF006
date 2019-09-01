/*  
	Atividade: Qual dos três? 
	Disciplina: Estrutura de Dados
	Professor: Marcelo Diniz
	Aluna: Tamires Pimenta Manhães 
	Data: 04 de Fevereiro de 2019
*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void SelectionSort(char *V);
void InsertioSort(char *V);
void BubbleSort (char *V);

void Menuprincipal();

int main(){
	int iCont, jCont, aux = 0;
	char V[TAM];
    
    FILE *ent;
    
    ent = fopen("teste.txt", "r"); //Lembrar de mudar o nome do arquivo pra cada tamanho desejado ou deixar 'teste.txt' para tamanhos até 10.000 entradas
    
	if(ent == NULL){
		printf("Erro! Nao consegui abrir o arquivo...\n");
		exit(1);
	}

	for(iCont = 0; iCont < TAM; iCont++){
		//printf("Lendo posicao %d\n", iCont);
		if(fscanf(ent, "%c", &V[iCont]) == EOF){
				setbuf(stdin, NULL);
			printf("Opa, tentei ler alem do final do arquivo...\n");
			break;
		}
	}

	int sair = 0;
	int opcao;

	while(!sair){
		Menuprincipal();
		scanf("%d", &opcao);

		switch(opcao){
			case 0: {
				sair = 1;
				printf("Finalizando...\n");
				break;
			}

			case 1: {
				printf("Selection Sort: ");
				SelectionSort(V);
				break;
			}

			case 2: {
				printf("Insertion Sort: ");
				InsertioSort(V);
				break;
			}

			case 3: {
				printf("Bubble Sort:\n");
				BubbleSort(V);
				break;
			}

			default: 
				printf(" Opcao incorreta, tente novamente\n");
		}
	}

	return 0;
}

void SelectionSort(char *V){ 
	int iCont, jCont, min, aux = 0;
	
	for(iCont = 0; iCont < TAM - 1; iCont++){
		min = iCont;
		for(jCont = iCont + 1; jCont < TAM; jCont++){
			if(V[jCont] < V[min]) 
				min = jCont;
			aux = V[min];
			V[min] = V[iCont];
			V[iCont] = aux;
    	 }
  	}

  	int contador;

  	printf("Ordenado: ");

  	for(contador = 0; contador < TAM; contador++){
  		printf("%c", V[contador]);
  	}
	printf("\n");
}

void InsertioSort(char *V){
	int i, j, aux;

	for(i = 1; i < TAM; i++){
		aux = V[i];
		for(j = i; (j > 0) && (aux < V[j - 1]); j--){
			V[j] = V[j - 1];
		}
		V[j] = aux;
	}

	int contador;

	printf("Ordenado: ");

	for(contador = 0; contador < TAM; contador++){
		printf("%c", V[contador]);
	}
	printf("\n");
}

void BubbleSort (char *V) {
    int k, j, aux;

    for (j = 0; j < TAM - 1; j++) {
        printf("%d, ", j);

        if (V[j] > V[j + 1]) {
            aux = V[j];
            V[j] = V[j + 1];
            V[j + 1] = aux;
        }
    }

	int contador;

	printf("Ordenado: ");

	for(contador = 0; contador < TAM; contador++){
		printf("%c", V[contador]);
	}
	printf("\n");
}


void Menuprincipal(){

	printf("0 - sair\n");
	printf("1 - Selection Sort\n");
	printf("2 - Insertion Sort\n");
	printf("3 - Bubble Sort\n");
	printf("\n");
	printf("DIGITE OPCAO DESEJADA: ");
}