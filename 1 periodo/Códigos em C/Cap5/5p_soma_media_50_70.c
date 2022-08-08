#include<stdio.h>
int main(){
    int i=50, soma=0;
    float qntItens;
    while (i<=70){
        soma+=i;
        qntItens++;
        i+=2;
    }
    printf("Soma = %d\n", soma);
    printf("Media aritmetica = %.f\n", soma/qntItens);    
}