#include <stdio.h>
#include <stdlib.h>
void SelectioSort(int A[], int N);

int main(void) {
	int V[8];
	int j;
	int n = 8;

	for(j = 0; j < n; j++){
		printf("---> : ");
		scanf("%d", &V[j]);
	}
	
	SelectioSort(V,n);

  return 0;
}

void SelectioSort(int A[], int N){
	int i, j, min, troca;

	for(i = 0; i < N-1; i++){
		min = i;
		for(j = i + 1; j < N; j++){
			if(A[j] < A[min])
			min = j;
		}
		if(min != i){
			troca = A[i];
			A[i] = A[min];
			A[min] = troca;
		}
	}

	for(int k = 0; k < N; k++)
		printf("%d\n", A[k]);

}