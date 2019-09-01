#include <stdio.h>
#include <stdlib.h>
void InsertionSort(int A[], int n);

int main() {
	int V[5];
	int n = 5;
	for(int k = 0; k < n; k++){
		printf("--->  : ");
		scanf("%d", &V[k]);
	}

	InsertionSort(V,n);
  return 0;
}

void InsertionSort(int A[], int n){
	int i, j, atual;

	for(i = 1; i < n; i++){
		atual = A[i];
		for(j = i-1; (j >= 0)&&(atual < A[j]); j--){
			A[j+1] = A[j];
		}
		A[j+1] = atual;
	}

	for(int k = 0; k < n; k++)
		printf("%d\n", A[k]);
}