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
int diferenca(int * ptrPInteiro, int * ptrSInteiro){//RECEBE COMO PARÂMETROS 2 PONTEIROS
    int vDiferenca;
    if (*ptrPInteiro >= *ptrSInteiro){
        vDiferenca = *ptrPInteiro - *ptrSInteiro;
        return vDiferenca;
    }else{
        vDiferenca = *ptrSInteiro - *ptrPInteiro;
        return vDiferenca;
    }
}

int main(){
    int * ptrPINTEIRO;
    int * ptrSINTEIRO;
    int PINTEIRO=0, SINTEIRO=0;
    //IMPRIME NA TELA A SOLICITAÇÃO DO PRIMEIRO INTEIRO PASSANDO "1" COMO PARÃMETRO
    txtSolicitacao(1); 
    //RECEBE O PONTEIRO DO PRIMEIRO INTEIRO
    PINTEIRO = leituraDeInteiro();  
    ptrPINTEIRO = &PINTEIRO;
    //IMPRIME NA TELA A SOLICITAÇÃO DO SEGUNDO INTEIRO PASSANDO "2" COMO PARÃMETRO
    txtSolicitacao(2);   
    //RECEBE O PONTEIRO DO SEGUNDO INTEIRO
    SINTEIRO = leituraDeInteiro();
    ptrSINTEIRO = &SINTEIRO;
    //DOIS PONTEIROS SÃO PASSADOS COMO PARÂMETROS E IMPRIME A DIFERENÇA DELES
    printf("A diferença dos números = %d\n", diferenca(ptrPINTEIRO, ptrSINTEIRO)); 
    return 0;
}