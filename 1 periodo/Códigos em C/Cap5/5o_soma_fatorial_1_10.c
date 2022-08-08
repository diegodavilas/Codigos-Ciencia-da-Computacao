#include<stdio.h>
int main(){
    int i=1, n=1, x=1, soma=0;
     while (x<10)
    {
        i=x;
        while (i>=1){
            n = n*i;
            i--;
        }
        soma=soma+n;
        x+=2;
        n=1;
    }
    printf("Soma dos fatoriais do numeros impar de 1 a 10=  %d\n", soma);
}