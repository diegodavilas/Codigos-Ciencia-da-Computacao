#include <stdio.h> 
#define TAM 5

int vetor[TAM] = {5,4,3,2,1};

void bubbleSort(int v[], int tamanho){
  int temp, i, j;
  for (j = 0; j < tamanho - 1; j++){
    for(i = 0; i < tamanho - 1; i++){
      if (v[i] > v[i + 1]){
        temp = v[i];
        v[i] = v[i + 1];
        v[i + 1] = temp;
      }
    }
  }
}

void listar(int v[], int tamanho){
  int i;
  printf("\n\nListando\n");
  for (i = 0; i < tamanho; i++){
    printf("%d ", v[i]);
  }

}

int main(){  
  listar(vetor,TAM);
  bubbleSort(vetor,TAM);
  listar(vetor,TAM);

}

