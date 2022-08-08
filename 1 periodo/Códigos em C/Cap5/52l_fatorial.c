#include<stdio.h>
int main(){
    float n, soma=0;
    int i=1, x;
    do{
        n=1;
        printf("\nDigite o %d número inteiro positivo: ", i);
        scanf("%d", &x);
        while (x>0){
            n = n*x;
            x--;
        }
        soma=soma+n;
        i++;
    }while (i<=15);
    printf("Soma dos fatoriais =  %.f\n", soma);
}