#include<stdio.h>
int main(){
    int i, numero=0, soma=0;
    float media;
    for(i=1; i<=10; i++){
        printf("Digite o %d número inteiro positivo: ", i);
        scanf("%d", &numero);
        soma+=numero;
        media=soma/10.0;        
    }
    printf("Soma dos valores =  %d\n", soma);
    printf("Media = %.1f \n", media);
}