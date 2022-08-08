#include<stdio.h>
int main(){
    int i, n=1, nImpar=1, soma=0;
    for(nImpar=1; nImpar<10; nImpar+=2){
        for(i=nImpar; i>=1; i--){
            n = n*i;
        }
        soma=soma+n;
        n=1;
    }
    printf("Soma dos fatoriais do numeros impar de 1 a 10 =  %d\n", soma);
}