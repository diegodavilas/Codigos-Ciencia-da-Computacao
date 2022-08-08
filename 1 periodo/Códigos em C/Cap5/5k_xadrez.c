#include<stdio.h>
int main(){
    float soma=0, graos=1;
    int quadro=1;
    while(quadro<=64){
        soma=graos+soma;
        graos=graos*2;
        quadro++;
    }
    printf("Total de graos = %.f grãos\n", soma);
}