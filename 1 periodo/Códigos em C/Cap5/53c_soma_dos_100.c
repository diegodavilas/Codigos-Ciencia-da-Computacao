#include<stdio.h>
int main(){
   int i, soma=0;
   for(i=1; i<=100; i++){
       soma+=i;
   }
   printf("A soma = %d\n", soma);
}