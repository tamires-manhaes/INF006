#include <stdio.h>

typedef struct data{
	int dia;
	int mes;
	int ano;
}Data;

void PreencheData(Data *dt);

int main() {
	Data data;

	PreencheData(&data);
	printf("Day = %d\n", data.dia);
	printf("Month = %d\n", data.mes);
	printf("Year = %d\n", data.ano);

  return 0;
}

void PreencheData(Data *dt){
	int dd;
	int mm;
	int aaaa;

	printf("Day: ");
	scanf("%d", &dd);
	printf("Month: ");
	scanf("%d", &mm);
	printf("Year: ");
	scanf("%d", &aaaa);
	printf("\n\n");

	(*dt).dia = dd;
	(*dt).mes = mm;
	(*dt).ano = aaaa;
}