#include<stdio.h>
//FUNÇAO QUE REALIZA A LEITURA E RETORNA UM INTEIRO
int leituraDeInteiro(){
    int inteiro;
    scanf("%d", &inteiro);
    return inteiro;
}

//CALCULA O QUOEFICIENTE
int calculoQuoeficiente(int dividendo, int divisor){
    int quoeficiente=0;
    do{
        dividendo-=divisor;
        quoeficiente++;
    }while (dividendo>=divisor);
    return quoeficiente;
}
void main(){
    int DIVISOR, DIVIDENDO;
    printf("Entre com o valor do DIVIDENDO: ");
    DIVIDENDO = leituraDeInteiro();
    printf("Entre com o valor do DIVISOR: ");
    DIVISOR = leituraDeInteiro();
    printf("Quoeficiente = %d\n", calculoQuoeficiente(DIVIDENDO, DIVISOR));
}