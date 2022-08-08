#include<stdio.h>
//PROGRAMA QUE CALCULA O QUOEFICIENTE

//FUNÇAO QUE REALIZA A LEITURA E RETORNA UM INTEIRO
int leituraDeInteiro(){
    int inteiro;
    scanf("%d", &inteiro);
    return inteiro;
}

//CALCULA O QUOEFICIENTE
int calculoQuoeficiente(int * dividendo, int * divisor){
    int quoeficiente=0;
    do{
        *dividendo-=*divisor;
        quoeficiente++;
    }while (*dividendo>=*divisor);
    return quoeficiente;
}
void main(){
    int DIVISOR, DIVIDENDO;
    int * ptrDIVISOR;
    int * ptrDIVIDENDO;
    printf("Entre com o valor do DIVIDENDO: ");
    DIVIDENDO = leituraDeInteiro();
    ptrDIVIDENDO = &DIVIDENDO;
    printf("Entre com o valor do DIVISOR: ");
    DIVISOR = leituraDeInteiro();
    ptrDIVISOR = &DIVISOR;
    printf("Quoeficiente = %d\n", calculoQuoeficiente(ptrDIVIDENDO, ptrDIVISOR));
}