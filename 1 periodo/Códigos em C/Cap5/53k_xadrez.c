#include<stdio.h>
int main(){
    float soma=0, graos=1;
    int quadro;
    for(quadro=1; quadro<=64; quadro++){
        soma=graos+soma;
        graos=graos*2;        
    }
    printf("Total de graos = %.f grãos\n", soma);
}