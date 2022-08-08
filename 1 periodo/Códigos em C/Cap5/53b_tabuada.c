#include<stdio.h>
int main(){
   int i, x;
   printf("Vamos montar a tabuada de MULTIPLICAÇÃO de um número");
   printf("\nDigite um número inteiro positivo: ");
   scanf("%d", &x);
   for(i=0; i<=10;i++){
       printf("\n%d X %d = %d", x, i, i*x);       
   }
   printf("\n");
}