#include <stdio.h>
main(){
    int i=0, x;
    printf("Vamos contar os números a partir do 0");
    printf("\nDigite um número inteiro positivo: ");
    scanf("%d", &x);
    for (i = 0; i <= x; i++){
        printf("%d ", i);
    }
    printf("\n");
}