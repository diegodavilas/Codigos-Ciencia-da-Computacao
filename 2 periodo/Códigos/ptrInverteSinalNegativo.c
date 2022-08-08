#include<stdio.h>
//FUNÇAO QUE REALIZA A LEITURA E RETORNA UM INTEIRO
int leituraDeInteiro(){
    int inteiro;
    scanf("%d", &inteiro);
    return inteiro;
}

//FUNÇÃO QUE INVERTE O SINAL SE NÚMERO FOR NEGATIVO
int inverterSinal(int * ptrValor){
    if (*ptrValor<=0){
        *ptrValor *=-1;
    }
    return *ptrValor;
}

int main(){
    int * ptrInteiro;
    printf("Digite um numero inteiro: ");
    int valor = leituraDeInteiro();
    ptrInteiro = &valor;
    printf("Valor com sinal positivo: %d\n", inverterSinal(ptrInteiro));
    return 0;
}