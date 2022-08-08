#include <stdio.h>
#include <stdlib.h>

//estrutura de dados necessária para a criação de uma fila encadeada
typedef struct SFila {
    int info;  
    struct SFila * next;
} TFila;

//sentinela
TFila * fila;


void enqueue(TFila ** f,int informacao){
    TFila * novo;
    TFila * ultimo;
    novo = malloc(sizeof(TFila));
    novo->info = informacao;
    novo->next = NULL;
    if (*f == NULL){
        *f = novo;
    }else{
        ultimo = *f;
        while (ultimo->next != NULL){
            ultimo = ultimo->next;
        }
        ultimo->next = novo;
    }
}

void listar(TFila * f){
    TFila * temp = f;

    printf("\nListando\n");
    while(temp != NULL){
        printf("[%d] = %d \n",temp, temp->info);
        temp = temp->next;
    }
}

TFila * buscar(TFila * f, int key){
    TFila * temp = f;

    while(temp != NULL){
        if (temp->info == key)
            return temp;
        temp = temp->next;
    }
    return NULL;
}

void dequeue(TFila ** f){
    TFila * temp;

    if (*f == NULL){
        printf("A fila está vazia");
        return;
    }

    temp = *f;
    *f = (*f)->next;
    free(temp);
}




int main(int argc, char** argv) {

    int leitura;
    int chave;
    fila = NULL;

    while(1){
        printf("Informe o valor: ");
        scanf("%d",&leitura);

        if (leitura == 0)
            break;
        
        enqueue(&fila, leitura);
    }

    listar(fila);
    dequeue(&fila);
    dequeue(&fila);
    listar(fila);

    printf("Informe a chave da busca: ");
    scanf("%d",&chave);
    TFila * posicao = buscar(fila,chave);
    if (posicao == NULL)
        printf("Chave não encontrada");
    else
        printf("Chave encontra no endereço: %d", posicao);


    return (EXIT_SUCCESS);
}
