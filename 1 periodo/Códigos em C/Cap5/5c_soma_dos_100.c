#include<stdio.h>
int main(){
   int i=1, soma=0;
   while (i<=100){
       soma=soma+i;
       i++;
   }
   printf("A soma = %d", soma);
}
