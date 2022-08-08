#include<stdio.h>
int main(){
    int d1, d2, q=0;
    printf("Entre com o valor do DIVIDENDO: ");
    scanf("%d", &d1);
    printf("Entre com o valor do DIVISOR: ");
    scanf("%d", &d2);
    while (d1>=d2){
        d1-=d2;
        q++;
    }
    printf("Quoeficiente = %d\n", q);
}