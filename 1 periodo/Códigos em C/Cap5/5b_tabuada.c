#include<stdio.h>
int main(){
   int i=0, x;
   printf("Vamos montar a tabuada de MULTIPLICAÇÃO de um número");
   printf("\nDigite um número inteiro positivo: ");
   scanf("%d", &x);
   while (i<=10){
       printf("\n%d X %d = %d", x, i, i*x);
       i++;
   }
   printf("\n");
}
