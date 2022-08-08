#include <stdio.h> 

/*
RECURSIVIDADE - Acontece quando uma sub-rotina (procedimento, função) chama a si própria de forma direta ou indireta.

*/

int teste();

void outra(){
  teste(); 
}



int teste(int c){
  int a;
  if (c == 10)
    return c;
  //printf("%d \n", c);
  c++;
  a = teste(c);
  printf("C: %d R: %d\n",c,a);
  return a;
}



int main(){ 
  int contador = 1;
  int r = teste(contador); 
  printf("R = %d",r);
}






