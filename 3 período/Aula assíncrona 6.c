#define TAMANHO 5

typedef struct estruturaFila{
    int inicio;
    int fim;
    int quant;
    int info[TAMANHO];
}TFila;

TFila fila;

void enqueue(TFila * fila, int info, int tamanho){
    if ((fila->fim != -1) && (fila->inicio == (fila->fim + 1) % tamanho)){
        printf("FILA CHEIA\n");
        return;
    }
    fila->fim = (fila->fim + 1) % tamanho;
    fila->info[fila->fim] = info;
    fila->quant++;
}
