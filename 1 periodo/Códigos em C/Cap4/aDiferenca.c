#include <stdio.h>
int main(){
    int P, S;
    printf("Digite o primeiro inteiro: ");
    scanf("%d", &P);
    printf("Digite o segundo inteiro: ");
    scanf("%d", &S);
    if (P>S){
        printf("A diferença é: %d\n", P-S);
    }else{
        printf("A diferença é: %d\n", S-P);
    }
}