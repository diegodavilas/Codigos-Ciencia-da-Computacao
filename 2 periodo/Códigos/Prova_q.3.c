#include <stdio.h>

int vetor[10];



typedef struct{
    char nome[50];
    int codbarras;
    float preco;
    float custo;
    
}TProduto;

TProduto listaProdutos[10];

void cadastrarProdutos(){
     int i;
    for (i=0; i< 10; i++)
                       {
                           printf("\nNome do produto: ");
                           scanf("%s", &listaProdutos[i].nome);
                           printf("\nCodigo de barras: ");
                           scanf("%d", &listaProdutos[i].codbarras);
                           printf("\nCusto de aquisicao: ");
                           scanf("%f", &listaProdutos[i].custo);
                           printf("\nPreco de revenda: ");
                           scanf("%f",&listaProdutos[i].preco);
                       }

}
void listarProdutos(){
     int i;
    printf("\nLista dos produtos:\n");
                     for (i=0; i< 10; i++)
                       {
                       printf("Nome: %s\nCodigo: %d\nCusto: %.2f\nPreco: %.2f\n\n",listaProdutos[i].nome, listaProdutos[i].codbarras,listaProdutos[i].custo,listaProdutos[i].preco);
                       }
                       
}

int main(){

   
    int opcao;
   
do {

          printf("Menu");

          printf ("\n   ***********************************\n");
          printf ("   * Feito por: Lucas Vinicius Rodrigues Frazao : *\n");
          printf ("   ***********************************\n");
          printf("\n       ####### MENU #######\n\n");
          printf("   ( 1 ) CADASTRAR PRODUTO \n");
          printf("   ( 2 ) LISTAR PRODUTO \n");
          printf("   ( 3 ) SAIR \n");
            

          printf("\n ESCOLHA UMA OPCAO:");
          scanf("%d",&opcao);

               switch(opcao) {
                   case 1:
                    cadastrarProdutos();

                   break;
                    

                    case 2:
                     listarProdutos(); 
                       break;     
                           case 3:
                       printf("\n\nsaindo.....");
                       break;
    }     }while(opcao!=3);
         return 0;
}
