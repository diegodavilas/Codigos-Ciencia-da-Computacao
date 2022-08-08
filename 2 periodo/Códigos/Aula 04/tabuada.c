#include<stdio.h>
//PROGRAMA QUE MONTA A TABUADA DE MULTIPLICAÇÃO DE UM INTEIRO

//FUNÇAO QUE REALIZA A LEITURA E RETORNA UM INTEIRO
int leituraDeInteiro(){
    int inteiro;
    scanf("%d", &inteiro);
    return inteiro;
}

//PROCEDIMENTO QUE MONTA A TABUADA
void apresentarTabuada(int * base){
    int i=0;
    while (i<=10){
       printf("\n%d X %d = %d", *base, i, i * *base);
       i++;
   }
   printf("\n");
}

int main(){   
   int NUMERO;
   int * ptrNUMERO;
   printf("Vamos montar a tabuada de MULTIPLICAÇÃO de um número");
   printf("\nDigite um número inteiro positivo: ");
   NUMERO = leituraDeInteiro();
   ptrNUMERO = &NUMERO;
   apresentarTabuada(ptrNUMERO);
   return 0;
}
