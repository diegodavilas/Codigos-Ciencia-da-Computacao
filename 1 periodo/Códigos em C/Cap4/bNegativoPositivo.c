#include<stdio.h>
int main(){
    int X;
    printf("Digite um numero inteiro: ");
    scanf("%d", &X);
    if (X<=0){
        printf("%d", X*-1);
    } else {
        printf("%d", X);
    }
}