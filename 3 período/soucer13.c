#include <stdio.h>
#include <stdlib.h>

//estrutura de dados necessária para a criação de uma fila encadeada
typedef struct SFila {
    int info;  
    struct SFila * next;
    struct SFila * prev;
} TFila;

//sentinela
TFila * fila;


void enqueue(int informacao){
    TFila * novo;
    TFila * ultimo;
    novo = malloc(sizeof(TFila));
    novo->info = informacao;
    novo->next = NULL;
    if (fila == NULL){
        fila = novo;
        novo->prev = NULL;
    }else{
        ultimo = fila;
        while (ultimo->next != NULL){
            ultimo = ultimo->next;
        }
        ultimo->next = novo;
        novo->prev = ultimo;
    }
}

void listar(){
    TFila * temp = fila;

    printf("\nListando\n");
    while(temp != NULL){
        printf("[prev] => %d\n[%d] = %d \n[next] => %d\n\n",temp->prev,temp, temp->info,temp->next);
        temp = temp->next;
    }
}

TFila * buscar(int key){
    TFila * temp = fila;

    while(temp != NULL){
        if (temp->info == key)
            return temp;
        temp = temp->next;
    }
    return NULL;
}

void dequeue(){
    TFila * temp;

    if (fila == NULL){
        printf("A fila está vazia");
        return;
    }

    temp = fila;
    fila = fila->next;
    fila->prev = NULL;
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
        
        enqueue(leitura);
    }

    listar();
    dequeue();
    dequeue();
    listar();

    printf("Informe a chave da busca: ");
    scanf("%d",&chave);
    TFila * posicao = buscar(chave);
    if (posicao == NULL)
        printf("Chave não encontrada");
    else
        printf("Chave encontra no endereço: %d", posicao);


    return (EXIT_SUCCESS);
}
