#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void printMenu();
void InserirELemento(int *PilhaPar, int *PilhaImpar, int *TopoPar, int *TopoImpar);
void ExcluirElementos(int *TopoPar, int *TopoImpar);
void ListarElementos(int *PilhaPar, int *PilhaImpar, int *TopoPar, int *TopoImpar);

int main() {
    int PilhaPar[TAM];
    int PilhaImpar[TAM];
    int TopoPar = 0;
    int TopoImpar = 0;
    int opcao;
    int sair = 0;

    while(!sair){
        printMenu();
        printf("Digite opcao desejada: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 0:{
                sair = 1;
                printf("Finalizando...\n");
                break;
            }
            case 1:{
                printf("Inserir Elementos: \n");
                InserirELemento(PilhaPar, PilhaImpar, &TopoPar, &TopoImpar);
                break;
            }
            case 2:{
                printf("Listar Elementos: \n");
                ListarElementos(PilhaPar, PilhaImpar, &TopoPar, &TopoImpar);
                break;
            }
            case 3:{
                printf("Excluir Elementos: \n");
                ExcluirElementos(&TopoPar, &TopoImpar);
                break;
            }
            default:{
                printf("Opcao incorreta, tente novamente!\n");
            }
        }
    }
	return 0;
}

void printMenu(){
    printf("0 - Sair\n");
    printf("1 - Inserir\n");
    printf("2 - Listar\n");
    printf("3 - Excluir\n");
    printf("\n\n");
}

void InserirELemento(int *PilhaPar, int *PilhaImpar, int *TopoPar, int *TopoImpar){
    int elemento;

    printf("Digite Elemento: ");
    scanf("%d", &elemento);

    if(elemento % 2 == 0){
        PilhaPar[*TopoPar] = elemento;
        *TopoPar = *TopoPar + 1;
    }
    else{
        PilhaImpar[*TopoImpar] = elemento;
        *TopoImpar = *TopoImpar + 1;
    }
    
}

void ExcluirElementos(int *TopoPar, int *TopoImpar){
    int op;

    printf("Qual pilha deseja excluir? (1) - Par || (2) - Impar : ");
    scanf("%d", &op);

    if(op == 1){
        *TopoPar = *TopoPar - 1;
        printf("Elemento par excluido!\n");
    }
    else if(op == 2){
        *TopoImpar = *TopoImpar - 1;
        printf("Elemento impar excluido!\n");
    }
    else
        printf("Opcao incorreta, tente novamente!");
}

void ListarElementos(int *PilhaPar, int *PilhaImpar, int *TopoPar, int *TopoImpar){
    int icont, jcont;

    printf("PILHA PAR: ");
    for(icont = 0; icont < *TopoPar; icont++)
        printf("%d", PilhaPar[icont]);

    printf("\n\n");

    printf("PILHA IMPAR: ");
    for(jcont = 0; jcont < *TopoImpar; jcont++)
        printf("%d", PilhaImpar[jcont]);

    printf("-----\n");
}
