#include<stdio.h>
int main(){
    float n=1, x;
    printf("Vamos calcular o FATORIAL de um número?");
    printf("\nDigite um número inteiro positivo: ");
    scanf("%f", &x);
    do{
        n = n*x;
        x--;
    }while(x>0);
    printf("Fatorial =  %.0f", n);
    printf("\n");       
}