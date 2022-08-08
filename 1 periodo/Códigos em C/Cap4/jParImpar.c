#include<stdio.h>
int main(){
    int N;
    printf("Digite um valor inteiro: ");
    scanf("%d", &N);
    if ((N % 2) == 0){
        printf("O valor %d é par", N);
    } else {
        printf("O valor %d é impar", N);
    }
}