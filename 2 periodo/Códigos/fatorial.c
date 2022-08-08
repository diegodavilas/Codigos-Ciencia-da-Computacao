#include<stdio.h>
//PROCEDIMENTO QUE IMPRIME NA TELA A SOLICITAÇÃO PARA ENTRADA DE UM VALOR INTEIRO
void txtSolicitacao(int inteiro){
    printf("INFORME O %dº NÚMERO INTEIRO: ", inteiro);
}

//FUNÇAO QUE REALIZA A LEITURA E RETORNA UM INTEIRO
int leituraDeInteiro(){
    int inteiro;
    scanf("%d", &inteiro);
    return inteiro;
}

//FUNÇÃO QUE CALCULA O FATORIAL DE UM NÚMERO
float fatorial(int inteiro){
    int j, soma=0;
    float n=1;
    for(j=inteiro; j>1; j--){
            n*=j;
    }
    return n;
}

int main(){
    float NUMERO;
    txtSolicitacao(1);   //IMPRIME NA TELA A SOLICITAÇÃO DO PRIMEIRO NÚMERO INTEIRO PASSANDO "1" COMO PARÃMETRO
    NUMERO = leituraDeInteiro();    //REALIZA A LEITURA DE UM VALOR E ARMAZENA NA VARIÁVEL NÚMERO
    printf("Fatorial = %.f\n", fatorial(NUMERO));   //IMPRIME NA TELA O FATORIAL DE UM NÚMERO PASSADO COMO PARÂMETROS
    return 0;
}