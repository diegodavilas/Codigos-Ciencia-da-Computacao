#include<stdio.h>
int main(){
    int valoresValidos=0;
    float numeroLido=0, media, soma=0;
    while (numeroLido>=0){
        printf("Digite o %d número inteiro positivo: ", valoresValidos);
        scanf("%f", &numeroLido);
        if (numeroLido>=0){            
            soma=soma+numeroLido;
            valoresValidos++;
        }
        if(numeroLido<0){
            if (valoresValidos==0){
                media=numeroLido/1;
            }
            break;
        }
        media=soma/valoresValidos;
    }
    printf("Soma dos valores válidos =  %.f\n", soma);
    printf("Media = %.1f \n", media);
    printf("%d valores validos lidos\n", valoresValidos);
}