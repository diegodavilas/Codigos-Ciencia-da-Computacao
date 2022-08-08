#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define TAM 10

typedef struct{
    char nome[30];
    char codbarras[30];
    float custo;
    float preco;
} Tproduto;

bool adicionarProdutos (Tproduto listaProdutos[], int *contador, int tamanho);

void mostrarProdutos (Tproduto listaProdutos[], int *contador);

void menu();

int main(void){
    Tproduto listaProdutos[TAM];
    int contador = 0;
    int op = 0;
    bool addProduto = false;

    while (op != 3){
        menu();
        scanf("%d", &op);
        switch (op){
            case 1:
                addProduto = adicionarProdutos(listaProdutos, &contador, TAM);
                if(addProduto){
                    printf("PRODUTO INCLUÍDO\n");
                }else{
                    printf("ESTOQUE PARA PRODUTOS LOTADO\n");
                }
                break;
            case 2:
                mostrarProdutos(listaProdutos, &contador);
                break;
            case 3:
                return 0;
            default:
                printf("OPÇÃO INVÁLIDA\n");
        }
    }
    return 0;
}

bool adicionarProdutos (Tproduto listaProdutos[], int *contador, int tamanho){
    int posicaoAtual = *contador;

    if(posicaoAtual == tamanho - 1){
     return false;
    }
    
    printf("Digite o NOME\n");
    scanf("%s", listaProdutos[posicaoAtual].nome);
    printf("Digite o CÓDIGO DE BARRAS\n");
    scanf("%s", listaProdutos[posicaoAtual].codbarras);
    printf("Digite o CUSTO\n");
    scanf("%f", &listaProdutos[posicaoAtual].custo);
    printf("Digite o PREÇO\n");
    scanf("%f", &listaProdutos[posicaoAtual].preco);
    *contador += 1;
    return true;
}

void mostrarProdutos (Tproduto listaProdutos[], int *contador){
    int posicao = *contador;

    if(posicao == 0){
        printf("\n\nNÃO HÁ PRODUTOS\n\n");
        return;
    }

    for ( int i = 0; i < posicao; i++)
    {
        printf("\nPRODUTO: %d\n", i + 1);
        printf("NOME : %s\nCÓDIGO DE BARRAS : %s\nCUSTO : %f\nPREÇO : %f\n", listaProdutos[i].nome, listaProdutos[i].codbarras, listaProdutos[i].custo, listaProdutos[i].preco);
    }
}

void menu(){
    printf("DIGITE:");
    printf("\n1 - ADICIONAR PRODUTO\n");
    printf("2 - MOSTRAR PRODUTOS\n");
    printf("3 - SAIR DO PROGRAMA\n");
}