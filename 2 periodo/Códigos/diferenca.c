#include <stdio.h>
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

//FUNÇÃO QUE CALCULA E RETORNA A DIFERENÇA ENTRE DOIS INTEIROS
int diferenca(int pInteiro, int sInteiro){//RECEBE COMO PARÂMETROS 2 INTEIROS
    if (pInteiro>sInteiro){
        return pInteiro -sInteiro;
    }else{
        return sInteiro - pInteiro;
    }
}

int main(){
    int PINTEIRO, SINTEIRO;
    txtSolicitacao(1);  //IMPRIME NA TELA A SOLICITAÇÃO DO PRIMEIRO NÚMERO INTEIRO PASSANDO "1" COMO PARÃMETRO
    PINTEIRO = leituraDeInteiro();  //RECEBE O PRIMEIRO INTEIRO INFORMADO PELO USUÁRIO
    txtSolicitacao(2);   //IMPRIME NA TELA A SOLICITAÇÃO DO SEGUNDO NÚMERO INTEIRO PASSANDO "2" COMO PARÃMETRO
    SINTEIRO = leituraDeInteiro();  //RECEBE O SEGUNDO INTEIRO INFORMADO PELO USUÁRIO
    printf("A diferença dos números = %d\n", diferenca(PINTEIRO, SINTEIRO));    //DOIS INTEIROS SÃO PASSADOS COMO PARÂMETROS E IMPRIME A DIFERENÇA DELES
    return 0;
}