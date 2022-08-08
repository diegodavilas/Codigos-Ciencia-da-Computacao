#include<stdio.h>
int main(){
    int N;

    printf("Digite um valor entre 1 e 9: ");
    scanf("%d", &N);

    if ((N > 0)&&(N <= 9)){
        printf("O valor está na faixa permitida");
    } else{
        printf("O valor não está na faixa permitida");
    }
}