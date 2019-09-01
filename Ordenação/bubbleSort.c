#include <stdio.h>
#include <stdlib.h>
void BubbleSort(int V[], int N);

int main(){
  int V[7];
	int i;
	int n = 7;

	for(i = 0; i <=7; i++){
		printf(": --> ");
		scanf("%d", &V[i]);
	}
	printf("\n");

	BubbleSort(V, n);
  return 0;
}
void BubbleSort(int V[], int N){
	int i, continua, aux, fim = N;

	do{
		continua = 0;
		for(i = 0; i < fim - 1; i++){
			if(V[i] > V[i+1]){
				aux = V[i];
				V[i] = V[i+1];
				V[i+1] = aux;
				continua = i;
			}
		}
		fim--;
	}while(continua != 0);

	for(int j = 0; j < 7; j++)
		printf("%d\n", V[j]);
}