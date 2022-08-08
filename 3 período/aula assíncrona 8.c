void dequeue(TFila ** fila){
    TFila * aux;
    if (*fila == NULL){//VERIFICA SE A FILA É VAZIA
        printf("FILA VAZIA!");
        return;
    }
    aux = *fila;
    *fila = (*fila)->next;
    free(aux);
}
