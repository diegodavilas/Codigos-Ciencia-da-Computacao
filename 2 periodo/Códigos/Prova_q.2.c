#include <stdio.h> 
#define TAM 10

char vetor[TAM];

int buscalinear(char v[],int tamanho, char key){
    int i;
    for (i = 0; i< tamanho; i++){
        if (key == v[i])
            return i;
        
    }
 return -1;
}


int main(){

    char chave;
    int posicao;
    int i;
    printf("Informe os nomes: ");
    for (i=0; i< TAM; i++){
        scanf("%s", &vetor[i]);
            }
printf("Informe a chave da busca: ");
scanf("%s",&chave);


posicao = buscalinear(vetor,TAM,chave);
if (posicao == -1){
    printf("\n\nNome nao encontrado na colecao\n\n");
}else{
    printf("\nO Nome foi encontrado na posicao: %d",posicao);
}
}