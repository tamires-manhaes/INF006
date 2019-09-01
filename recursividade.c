#include <stdio.h>
#include <stdlib.h>

int main(){
	int val, resp;

	printf("Informe valor: ");
	scanf("%d", &val);

	resp = fatorial(val);

	printf("O fatorial de %d igual a = %d\n",val, resp);

	return 0;
}

int fatorial(int x){
	int temp; 
	if(x > 1){
		temp = x * fatorial(x - 1);
	} else {
		return 1;
	}

}