#include<stdio.h>
int main(){
   int i=1, soma=0;
   do{
       soma=soma+i;
       i++;
   }
   while (i<=100);
   printf("A soma = %d", soma);
}