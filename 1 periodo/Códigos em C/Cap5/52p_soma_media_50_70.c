#include<stdio.h>
int main(){
    int i=50, soma=0;
    float qntItens;
    do{
        soma+=i;
        qntItens++;
        i+=2;
    }while (i<=70);
    printf("Soma = %d\n", soma);
    printf("Media aritmetica = %.f\n", soma/qntItens);    
}