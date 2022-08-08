#include <stdio.h> 
#include <stdlib.h>

/*
Manipulação de arquivos
-> É a manipulação (criação, edição e leitura) de arquivos durante a programação para alcançar um determinado objetivo.
-> O principal motivo da utilização de arquivo na programação é para persistência de dados. 
  1. Principais funções:
       1.1 Fopen -> FILE * arquivo = fopen(ENDERECO,MODOS_ABERTURA);
          1.1.1 Modos de abertura
                'r' -> somente leitura
                'w' -> escrita, ele cria o arquivo caso não exista e limpa o conteúdo.
                'a' -> escrita, ele cria o arquivo caso não exista, e insere o cursor no final do arquivo.
       1.2 Fscanf -> fscanf(arquivo, FORMATO, VARIAVEIS);
       1.3 Fprint -> fprintf(arquivo, FORMATO, VARIAVEIS);
       1.4 FClose -> fclose(arquivo);
*/




int main(){ 

  int idade;
  char nome[50];
  // FILE * arquivo = fopen("dados.data","a");
  // printf("Informe o nome e a idade: ");
  // scanf("%s %d",nome, &idade);
  // fprintf(arquivo,"%d %s\n",idade, nome);
  // fclose(arquivo);

  FILE * leitura = fopen("dados.data","r");
  printf("\n\nDADOS DO ARQUIVO\n\n");
  while (1) {
    if (fscanf(leitura,"%d %s",&idade, nome) != 2)
        break;
    printf("Nome: %s idade: %d\n",nome,idade);
  }
  fclose(leitura);
}






