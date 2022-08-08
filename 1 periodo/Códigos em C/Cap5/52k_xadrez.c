#include<stdio.h>
int main(){
    float soma=0, graos=1;
    int quadro=1;
    do{
        soma=graos+soma;
        graos=graos*2;
        quadro++;
    }while(quadro<=64);
    printf("Total de graos = %.f grãos\n", soma);
}