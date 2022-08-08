#include <stdio.h> 
#define TAM 10

char vetor[TAM];

int buscaLinear(char vetor[],int tamanho, char chave){
    int i;
    for (i = 0; i< tamanho; i++){
        if (chave == vetor[i])
            return i;   
    }
 return -1;
}

int main(){

    char chave;
    int posicao;
    int i;
    
    printf("Informe os nomes: \n");
    for (i=0; i< TAM; i++){
        scanf("%s", &vetor[i]);
    }
    
    printf("Informe a chave da busca: ");
    scanf("%s",&chave);

    posicao = buscaLinear(vetor,TAM,chave);
    if (posicao == -1){
        printf("\n\nNome nao encontrado.\n\n");
    }else{
        printf("\nNome foi encontrado na posicao: %d\n\n",posicao);
    }
}