#include<stdio.h>
int main(){
  int i=0, soma=0;
  while (i<=500){
      soma=soma+i;
      i+=2;
  }
  printf("A soma = %d", soma);
}
