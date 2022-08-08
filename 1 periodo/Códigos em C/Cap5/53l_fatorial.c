#include<stdio.h>
int main(){
    float n, soma=0;
    int i, j, x;
    for(i=1; i<=15; i++){
        n=1;
        printf("\nDigite o %d número inteiro positivo: ", i);
        scanf("%d", &x);
        for(j=x; j>0; j--){
            n*=j;
        }
        soma=soma+n;
    }
    printf("Soma dos fatoriais =  %.f\n", soma);
}