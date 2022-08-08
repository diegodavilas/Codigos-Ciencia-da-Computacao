#include<stdio.h>
int main(){
    int i=1, numero=0, soma=0;
    float media;
    while (i<=10)
    {
        printf("Digite o %d número inteiro positivo: ", i);
        scanf("%d", &numero);
        soma=soma+numero;
        media=soma/10.0;
        i++;
    }
    printf("Soma dos valores =  %d\n", soma);
    printf("Media = %.1f \n", media);
}