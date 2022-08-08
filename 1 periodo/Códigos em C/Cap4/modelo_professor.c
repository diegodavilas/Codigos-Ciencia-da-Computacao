#include <stdio.h>
#include <string.h>

float areatotal;
float areacomodo;
float largura, comprimento;
char comodo[50];
char opcao[3];

int main() {

	areatotal = 0;
	do{
		printf("Informe o nome, comprimento e largura do cômodo: ");
		scanf("%s %f %f", &comodo, &comprimento, &largura);

		areacomodo = comprimento * largura;
		areatotal += areacomodo;

		printf("Deseja continuar ?");
		scanf("\n%c", &opcao);
	}while(strcmp(opcao,"Não") != 0) ;
	printf("\nÁrea total: %.1f\n\n",areatotal);
}