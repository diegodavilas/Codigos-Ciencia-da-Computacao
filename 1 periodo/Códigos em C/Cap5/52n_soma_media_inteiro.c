#include<stdio.h>
int main(){
    int valoresValidos=0;
    float numeroLido, media, soma=0;
    do{
        printf("Digite o número inteiro positivo: ");
        scanf("%f", &numeroLido);
        if (numeroLido>=0){            
            soma=soma+numeroLido;
            valoresValidos++;
        }else{
            if(numeroLido<0){
                if (valoresValidos==0){
                    media=numeroLido/1;
                }
                break;
            }
        }        
        media=soma/valoresValidos;
    }while (numeroLido>=0);
    printf("Soma dos valores válidos =  %.f\n", soma);
    printf("Media = %.1f \n", media);
    printf("%d valores validos lidos\n", valoresValidos);
}