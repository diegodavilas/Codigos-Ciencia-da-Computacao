#include<stdio.h>
int main(){
  int i=0, soma=0;
  do{
      soma=soma+i;
      i+=2;
  }
  while (i<=500);
  printf("A soma = %d", soma);
}