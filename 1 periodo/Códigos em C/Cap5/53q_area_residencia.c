#include<stdio.h>
#include<string.h>
int main(){
    char op[3]="SIM", comodo[20];
    float areaTotal=0, areaComodo=0, largura, comprimento;
    int i;
    for(i=0; (strcmp(op,"SIM") == 0); i++){
        printf("Informe o Comodo: ");
        scanf("%s", &comodo);
        printf("Informe o comprimento do comodo: ");
        scanf("%f", &comprimento);
        printf("Informe a largura do comodo: ");
        scanf("%f", &largura);
        areaComodo=comprimento*largura;
        areaTotal+=areaComodo;
        printf("Digite SIM para adicionar comodo. \nDigite NÃO para sair ");
        scanf("%s", &op);
    }
    printf("Area total = %.f\n", areaTotal);
}