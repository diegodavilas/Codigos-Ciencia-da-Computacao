#include<stdio.h>
int main(){
    int N;
    printf("Digite um valor inteiro: ");
    scanf("%d", &N);

    if (!(N > 3)){
        printf("%d", N);
    }
}