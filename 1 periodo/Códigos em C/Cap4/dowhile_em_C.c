#include<stdio.h>
#include<string.h>
int main(){
    char i[2];
    float peso, altura, imc;
    do{
        printf("VAMOS CALCULAR SEU INDICE DE MASSA CORPORAL");
        printf("\nInforme seu peso em QUILOGRAMA: ");
        scanf("%f", &peso);
        printf("\nInforme sua altura em METROS: ");
        scanf("%f", &altura);
        imc = (peso/(altura*altura));
        printf("\nSeu IMC é = %f", imc);
        printf("\nDeseja repetir o teste? S ou N: ");
        scanf("%s", i);
    }while ((i[0]=='s') || (i[0]=='S'));
}