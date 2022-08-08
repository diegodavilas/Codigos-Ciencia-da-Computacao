#include<stdio.h>
int main(){
    int i, valoresValidos=0;
    float numeroLido=0, media, soma=0;
    for(i=0; numeroLido>=0; i++){
        printf("Digite o %d número inteiro positivo: ", valoresValidos);
        scanf("%f", &numeroLido);
        if (numeroLido>=0){            
            soma=soma+numeroLido;
            valoresValidos++;
        }
        else{
            if(numeroLido<0){
                if (valoresValidos==0){
                    media=numeroLido/1;
                }
                break;
            }
        }
        media=soma/valoresValidos;
    }
    printf("Soma dos valores válidos =  %.f\n", soma);
    printf("Media = %.1f \n", media);
    printf("%d valores validos lidos\n", valoresValidos);
}