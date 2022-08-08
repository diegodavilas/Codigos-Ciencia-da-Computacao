#include <stdio.h> 
#include <stdlib.h> 

/* Referência -> Modalidade de variável que armazena endereços de memória.
Endereços de memória = Ponteiro

int valor; 4 Bytes;
char nome; 1 Byte;

SINTAXE 
  tipo * nome;

int * valor;  8 Bytes -> Ponteiros -> Endereços memória
char * nome;  8 Bytes -> Ponteiros -> Endereços memória

As referências iniciam com o valor NULL.
*/

int soma(int * a, int * b){
    *a = *a + 50;
    return *a + *b;
}

int main(){  
    //EXEMPLO 01
    // int * valor;
    int numero[4], numero2 = 60;

    // valor = &numero;
    // *valor = 20;
    // printf("\n\n%d %d\n\n", &numero, *valor);
    int r = soma(&numero,&numero2);
    printf("\n\n %d -> %d \n\n", numero, r);




}

