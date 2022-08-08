#include<stdio.h>
#define TAMANHO 50
//criação do tipo da estrutura de dados
    typedef struct Sagenda{
        char nome[20];
        char telefone[15];
        char email[TAMANHO];
    }Tagenda;
    Tagenda cadastro[TAMANHO];

int main(){
    int i, soma=0;
    
    for(i=0; i<=1; i++){
        printf("%d\n", i);
        printf("Informe o nome: ");
        scanf("%s", cadastro[i].nome);
        printf("Informe o telefone: ");
        scanf("%s", cadastro[i].telefone);
        printf("Informe o email: ");
        scanf("%s", cadastro[i].email);
    }
    
    // for(i=2; i<=10; i++){
    //     printf("elemento em %d%s", i, cadastro[i].nome);
    // }
    i=0;
    while (cadastro[i].nome[0] != '\0'){
        i++;
        //printf("\n%d", i);
    }
    printf("\nPrimeiro endereço disponível %d\n", i);
    i=0;
    while (i < TAMANHO){
        if(cadastro[i].nome[0] == '\0'){
            soma++;
        }
        i++;
    }
    printf("\nEndereços vagos %d\n", soma);
}