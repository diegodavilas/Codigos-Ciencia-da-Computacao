#include<stdio.h>
//PROGRAMA CALCULA O FATORIAL DE UM NÚMERO

//PROCEDIMENTO QUE IMPRIME NA TELA A SOLICITAÇÃO PARA ENTRADA DE UM VALOR
void txtSolicitacao(int inteiro){
    printf("INFORME O %dº NÚMERO : ", inteiro);
}

//FUNÇAO QUE REALIZA A LEITURA E RETORNA UM NUMERO
float leituraDeNumero(){
    float numero;
    scanf("%f", &numero);
    return numero;
}

//FUNÇÃO QUE CALCULA O FATORIAL DE UM NÚMERO
float fatorial(float * numero){
    int j, soma=0;
    float n=1;
    for(j=*numero; j>1; j--){
            n*=j;
    }
    return n;
}

int main(){
    float NUMERO;
    float * ptrNUMERO;
    txtSolicitacao(1);   //IMPRIME NA TELA A SOLICITAÇÃO DO PRIMEIRO NÚMERO INTEIRO PASSANDO "1" COMO PARÃMETRO
    NUMERO = leituraDeNumero();    //REALIZA A LEITURA DE UM VALOR E ARMAZENA NA VARIÁVEL NÚMERO
    ptrNUMERO = &NUMERO;
    printf("Fatorial = %.f \n", fatorial(ptrNUMERO));   //IMPRIME NA TELA O FATORIAL DE UM NÚMERO PASSADO COMO PARÂMETROS
    return 0;
}