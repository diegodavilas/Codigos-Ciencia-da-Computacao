#include<stdio.h>
int main(){
    int i, x;
    printf("Vou te auxiliar a fazer contagem regressiva de 2 em 2!");
    printf("\nDigite um número inteiro positivo: ");
    scanf("%d", &x);
    for(i=x; i>=0; i-=2){
        printf("%d\n", i);
    }
}