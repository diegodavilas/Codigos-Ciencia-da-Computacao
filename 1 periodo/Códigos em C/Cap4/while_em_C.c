#include<stdio.h>
int main(){
    int i=0, x;
    printf("Vou te auxiliar a contar de 0 ao número que desejar!");
    printf("\nDigite um número inteiro positivo: ");
    scanf("%d", &x);
    while (i<=x){
        printf(" %d", i);
        i++;
    }
    printf("\n");
}