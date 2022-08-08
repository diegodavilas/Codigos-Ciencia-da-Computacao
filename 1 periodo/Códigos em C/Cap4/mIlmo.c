#include<stdio.h>
#include<string.h>
int main(){
    char NOME[10], S[2];

    printf("Escreva seu nome: ");
    scanf("%s", NOME);
    printf("Escreva seu sexo 'M' ou 'F': ");
    scanf("%s", S);

    if ((S[0] == 'M')||(S[0] == 'm')){
        printf("Ilmo Sr. %s", NOME);
    }else{
        printf("Ilma Sra. %s", NOME);
    }
}