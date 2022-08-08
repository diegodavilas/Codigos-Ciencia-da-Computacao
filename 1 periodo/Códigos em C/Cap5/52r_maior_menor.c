#include<stdio.h>
int main(){
    int valorLido=1, menor=0, maior=0, i=1;
    do{
        printf("Informe um valor: ");
        scanf("%d", &valorLido);
        if (i==1){
            menor=valorLido;
            maior=valorLido;
        }        
        if(valorLido>=0){
            if(valorLido>maior){
                maior = valorLido;
            }
            if(valorLido<menor){
                menor=valorLido;
            }
        }
        
        if (valorLido<0){
            //break;
        }
        i++;
    }while (valorLido >= 0 );
    printf("Maior valor = %d\n", maior);
    printf("Menor valor = %d\n", menor);    
}