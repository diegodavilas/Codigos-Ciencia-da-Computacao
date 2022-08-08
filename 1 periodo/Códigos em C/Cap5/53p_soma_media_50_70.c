#include<stdio.h>
int main(){
    int i, soma=0;
    float qntItens;
    for(i=50; i<=70; i+=2){
        soma+=i;
        qntItens++;
    }
    printf("Soma = %d\n", soma);
    printf("Media aritmetica = %.f\n", soma/qntItens);    
}