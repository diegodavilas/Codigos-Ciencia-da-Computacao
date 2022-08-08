#include <stdio.h>
#include <stdlib.h>
//ESTRUTURA DA DADOS DA LISTA ENCADEADA
typedef struct SElementoLista{
    int info;
    struct SElementoLista * next;    
}TElementoLista;

typedef struct SLista{
    int tamanho;
    struct TElementoLista *inicio;
}TLista;

TLista * listaPtr;


void listarQuantidade(TLista *L){
    printf("\nQUANTIDADE DE ELEMENTOS DA LISTA: %d", L->tamanho);
}

void listarElementos(TLista *L){
    TElementoLista * elemento = (TElementoLista*)L->inicio;
    printf("\nELEMENTOS DA LISTA: ");
    while (elemento != NULL){
        printf("%d  ", elemento->info);
        elemento = elemento->next;
    }
}

//INSERIR NO INICIO DA LISTA
void addInicio(TLista *L, int inf){
    TElementoLista * novo = (TElementoLista*)malloc(sizeof(TElementoLista));
    //TLista * listaTemp = L;
    novo->info = inf;
    novo->next = L->inicio;
    L->inicio = novo;
    L->tamanho++;
}

//INSERIR NO FINAL DA LISTA
void addFim(TLista **L, int inf){
    TElementoLista elementoTemp, * novo = (TElementoLista*)malloc(sizeof(TElementoLista));
    TLista * listaTemp = (*L);
    novo->info = inf;
    novo->next = NULL;
    if((*L)->inicio == NULL){
        (*L)->inicio = novo;
    }
    else{
        elementoTemp = (*L)->inicio;
        while (elementoTemp.next != NULL){
            elementoTemp = elementoTemp.next;
        }
        elementoTemp->next = novo;
    }
    listaTemp->tamanho++;
}

void delete(TLista **L, int info){
    TLista * listaTemp = (*L);
    TElementoLista elementoTemp, * elemento;
    elemento = *listaTemp->inicio;
    elementoTemp=elemento;
    
    if(listaTemp->inicio==NULL){
        printf("A Lista está vazia!");
    }//fim if
    else{
        if(elemento->info == info){
            listaTemp->inicio = *elemento->next;
            free(elementoTemp);
            listaTemp->tamanho--;
        }else{
            while (elemento->next != NULL && elemento->info != info){
                elementoTemp = elemento->next;
                if(elementoTemp.info==info){
                    elemento->next = elementoTemp.next;
                    free(elementoTemp);
                    listaTemp->tamanho--;
                }//fim if
                else{
                    elemento = elementoTemp;
                }//fim else
            }//fim while
        }//fim else
    }//fim else
}//fim delete

void menu(){
    printf("\n1 = Adicionar no INÍCIO\n2 = Adicionar no FIM\n3 = Adicionar ENTRE elementos\n4 = Listar\n5 = Buscar\n6 = Remover\n0 = Sair\n");
}

int ler_opcao(){
    int opcao;
    printf ("\nDigite sua Opcao: ");
    scanf ("%d", &opcao);
    //setbuf (stdin, NULL);
    return opcao;
}

int main(int argc, char** argv) {
   TLista lista;
   //lista.inicio = NULL;
   //lista.tamanho = 0;
   listaPtr = &lista;
   listaPtr->inicio = NULL;
   listaPtr->tamanho = 0;

   int key, opcao, posicao, inf;
   do{
       menu();
       opcao = ler_opcao();
       switch(opcao){
           case 1: //INSERIR ELEMENTO NO INÍNIO DA FILA
               printf("Informe o valor que deseja inserir: ");
               scanf("%d",&inf);
               addInicio(listaPtr, inf);
               break;
           case 2://INSERIR ELEMENTO NO FIM DA FILA
               printf("Informe o valor que deseja inserir: ");
               scanf("%d",&inf);
               addFim(listaPtr, inf);
               break;
            case 3://LISTAR ELEMENTOS DA FILA
               listarElementos(listaPtr);
               listarQuantidade(listaPtr);
               break;
            case 4://DELETAR UM ELEMENTO
                delete(&listaPtr, inf);
                listarElementos(listaPtr);
            case 0://SAIR
                opcao=0;
                break;
            default:
                printf("\nOpcao invalida\n");
       }
   }while(opcao != 0);
}
