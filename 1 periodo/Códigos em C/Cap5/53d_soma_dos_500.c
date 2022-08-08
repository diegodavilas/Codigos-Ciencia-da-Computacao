#include<stdio.h>
int main(){
  int i, soma=0;
  for(i=0;i<=500;i+=2){
      soma+=i;
  }
  printf("A soma = %d\n", soma);
}