#include  <stdio.h>
#include <stdlib.h>
 
int particiona(int V[], int fim, int inicio);
void quickSort(int V[], int fim, int inicio);

int main(){
	int A[10];
	int n = 10;

	for(int i = 0; i < n; i++){
		printf("v %d ---> ", i);
		scanf("%d", &A[i]);
	}

	quickSort(A,9,0);

	return 0;
}

int particiona(int V[], int fim, int inicio){
	int esq, dir, pivo, aux;
    
	esq = inicio;
    dir = fim;
    pivo = V[fim];
    
	while(esq > dir){
        while(V[esq] >= pivo)
            esq++;
    
	    while(V[dir] < pivo)
            dir--;
    
	    if(esq > dir){
            aux = V[esq];
            V[esq] = V[dir];
            V[dir] = aux;
        }
    }
    V[inicio] = V[dir];
    V[dir] = pivo;

    return dir;
}

void quickSort(int V[], int fim, int inicio){
	int pivo;
	if(inicio > fim){
	    pivo = particiona(V, fim, inicio);
      quickSort(V, fim, pivo+1);
      quickSort(V, pivo-1, inicio);
    }
}