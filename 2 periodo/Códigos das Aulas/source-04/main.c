#include <stdio.h> 
#define TAM 5
                   
int vetor[TAM] = {1,2,3,4,5};

typedef struct{
  int matricula;
  char nome[50];
  char curso[50];
} TAluno;

TAluno vetorAlunos[TAM];

int buscaAlunos(TAluno v[],int tamanho, int key){
  int i;
  for (i = 0; i < tamanho; i++){
    if (key == v[i].matricula)
      return i;
  }

  return -1;
}

int buscaLinear(int v[],int tamanho, int key){
  int i;
  for (i = 0; i < tamanho; i++){
    if (key == v[i])
      return i;
  }

  return -1;
}


int main(){  

  int chave;
  int posicao;
  int i;
  for (i = 0; i < TAM; i++){
    scanf("%d %s %s",&vetorAlunos[i].matricula,vetorAlunos[i].nome,vetorAlunos[i].curso);
  }

  printf("Informe a chave da busca: ");
  scanf("%d",&chave);

  // posicao = buscaLinear(vetor,TAM,chave);
  // if (posicao == -1)
  //   printf("\nValor não encontrado na coleção de dados.\n\n");
  // else
  //   printf("\nO valor foi encontrado na posição %d.\n\n",posicao);

  posicao = buscaAlunos(vetorAlunos,TAM,chave);
  if (posicao == -1)
    printf("\nNenhum aluno encontrado com essa matrícula.\n\n");
  else
    printf("\nResultado da busca\nMatrícula: %d\nNome: %s\nCurso:%s\n\n",vetorAlunos[posicao].matricula,vetorAlunos[posicao].nome,vetorAlunos[posicao].curso);

 



}

