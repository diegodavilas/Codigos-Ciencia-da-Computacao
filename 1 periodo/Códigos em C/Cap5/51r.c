#include<stdio.h>
int main(){
    int valorLido=1, menor=0, maior=0, i=1;
    while (valorLido >= 0 ){
        printf("Informe um valor: ");
        scanf("%d", &valorLido);               
        if(valorLido>=0){
            if (i==1){
                menor=valorLido;
                maior=valorLido;
            }else{
                if(valorLido>maior){
                    maior = valorLido;
                }else{
                    menor=valorLido;
                }
            }
        }else{
            if (i==1){
                menor=valorLido;
                maior=valorLido;
            }
            break;
        }
        i++;
    }
    printf("Maior valor = %d\n", maior);
    printf("Menor valor = %d\n", menor);    
}