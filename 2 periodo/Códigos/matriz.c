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

int montarMatriz(int tamanho){
    int i, a[tamanho];
    for (i=0; i<tamanho; i++){
        txtSolicitacao(i);
        a[i] = leituraDeInteiro();
    }
    return &a;
}

void apresentaMatriz(int *arr, int size){
    int i=0;
    printf("%s%10s\n", "ELEMENTO", "VALOR");
    for (i=0; i<size; i++){
        printf("%d\n", *(arr+i));
        // printf("%4d%12d\n", i, *(arr+i));
        // printf("%4d%12d\n", i, arr+i);
        // printf("%4d%12d\n", i, &arr+i);
        // printf("%4d%12d\n", i, arr[i]);
        printf("\n");
    }
}

int main(){
    int TAMANHO, I;
    int * ptrVetor;
    
    printf("INFORME O TAMANHO DA MATRIZ: ");
    TAMANHO = leituraDeInteiro();
    ptrVetor = montarMatriz(TAMANHO);
    for(I=0; I<TAMANHO; I++){
        printf("\n%d\n", ptrVetor+I);
    }
    //apresentaMatriz(ptrVetor, TAMANHO);
    
    return 0;
}