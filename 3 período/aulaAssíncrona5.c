#define TAMANHO 5

typedef struct estruturaPilha{
    int topo;
    int info[TAMANHO];
}TPilha;

TPilha pilha;

void pop(TPilha * pilha){
    if (pilha->topo == -1){
        printf("PILHA LIMPA\n");
        return;
    }
    pilha->topo--;
}

int busca(TPilha * pilha, int chave){
    int i;
    for (i = pilha->topo; i >= 0; i--){
        if (pilha->info[i] == chave){
           return i;
        }
    }
    return -1;
}
