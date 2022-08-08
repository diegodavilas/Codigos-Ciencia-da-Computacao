#include <stdio.h>
#include <stdlib.h>
//ESTRUTURA DE ELEMENTOS DA LISTA
typedef struct elemento{
    int valorElemento;
    struct elemento *antElemento;
    struct elemento *proxElemento;
}TElemento;

//ADICIONA UM ELEMENTO NO INÍCIO DA LISTA
void addInicio(TElemento **lista, int info){
    TElemento *novo = malloc(sizeof(TElemento));
    if(novo){
        novo->valorElemento=info;
        novo->proxElemento = *lista;
        if(*lista){
            (*lista)->antElemento=novo;
        }//fim if
        *lista = novo;
    }else{
        printf("\nERRO AO ALOCAR MEMÓRIA!\n");
    }//fim else
}//fim addInicio()

//ADICIONA UM ELEMENTO NO FINAL DA LISTA
void addFinal(TElemento **lista, int info){
    TElemento *auxLista, * novo = malloc(sizeof(TElemento));
    if(novo){
        novo->valorElemento=info;
        novo->proxElemento=NULL;
        if(*lista==NULL){
            *lista = novo;
            novo->antElemento = NULL;
        }//fim if
        else{
            auxLista = *lista;
            while (auxLista->proxElemento){
                auxLista = auxLista->proxElemento;
            }//fim while
            auxLista->proxElemento = novo;
            novo->antElemento=auxLista;
        }//fim else
    }//fim if
    else{
        printf("\nERRO AO ALOCAR MEMÓRIA!\n");
    }//fim else
}//fim addFinal()

//ADICIONA UM ELEMENTO NO MEIO DA LISTA
void addMeio(TElemento **lista, int info, int ant){
    TElemento *auxLista, * novo = malloc(sizeof(TElemento));
    if(novo){
        novo->valorElemento = info;
        if(*lista == NULL){
            novo->proxElemento=NULL;
            novo->antElemento=NULL;
            *lista = novo;
        }//fim if
        else{
            auxLista = *lista;
            while (auxLista->valorElemento != ant && auxLista->proxElemento){
                auxLista = auxLista->proxElemento;
            }//fim while
            novo->proxElemento = auxLista->proxElemento;
            auxLista->proxElemento->antElemento = novo;
            novo->antElemento = auxLista;
            auxLista->proxElemento = novo;
        }//fim else
    }//fim if
    else{
        printf("\nERRO AO ALOCAR MEMÓRIA!\n");
    }//fim else
}//fim addMeio()

//REMOVE UM ELEMENTO DA LISTA
TElemento * remover(TElemento **lista, int info){
    TElemento * auxLista, * remover = NULL;
    if(*lista){
        if((*lista)->valorElemento == info){
            remover = *lista;
            *lista=remover->proxElemento;
            if(*lista){
                (*lista)->antElemento=NULL;
            }//fim if
        }//fim if
        else{
            auxLista = *lista;
            while(auxLista->proxElemento && auxLista->proxElemento->valorElemento != info){
                auxLista=auxLista->proxElemento;
            }//fim while
            if(auxLista->proxElemento){
                remover=auxLista->proxElemento;
                auxLista->proxElemento=remover->proxElemento;
                if(auxLista->proxElemento){
                    auxLista->proxElemento->antElemento=auxLista;
                }//fim if 
            }//fim if
        }//fim else
    }//fim if
    return remover;
}//fim *remover()

//BUSCA UM ELEMENTO NA LISTA
TElemento * buscar(TElemento **lista, int info){
    TElemento * auxLista, * elemento = NULL;
    auxLista = *lista;
    while (auxLista && auxLista->valorElemento != info){
        auxLista = auxLista->proxElemento;
    }//fim while
    if(auxLista){
        elemento = auxLista;
    }//fim if
    return elemento;
}

//MOSTRA OS ELEMENTOS DA LISTA
void imprimir(TElemento *elemento){
    printf("\nLISTA:\n");
    while(elemento){
        printf("%d ", elemento->valorElemento);
        elemento = elemento->proxElemento;
    }//fim while
    printf("\nFIM DA LISTA\n");
}//fim imprimir()

//EXIBE AS OPÇÕES DO MENU
void menu(){
    printf("\n1 = Adicionar no INÍCIO\n2 = Adicionar no FIM\n3 = Adicionar no MEIO\n4 = Excluir\n5 = Buscar\n6 = Listar\n0 = Sair\n");
}//fim menu()

//CAPTURA A OPÇÃO DESEJADA DO MENU
int ler_opcao(){
    int opcao;
    printf ("\nDigite sua Opcao: ");
    scanf ("%d", &opcao);
    return opcao;
}//fim ler_opcao()

int main() {
   int valor, opcao, anterior;
   TElemento *removido, *lista = NULL;
   do{
       menu();
       opcao = ler_opcao();
       switch(opcao){
           case 1: //INSERIR ELEMENTO NO INÍNIO DA LISTA
               printf("INFORME O VALOR QUE DESEJA INSERIR: ");
               scanf("%d",&valor);
               addInicio(&lista, valor);
               break;
           case 2://INSERIR ELEMENTO NO FIM DA LISTA
               printf("INFORME O VALOR QUE DESEJA INSERIR: ");
               scanf("%d",&valor);
               addFinal(&lista, valor);
               break;
            case 3://INSERIR MEIO
               printf("INFORME O VALOR QUE DESEJA INSERIR: ");
               scanf("%d",&valor);
               printf("DEPOIS DE QUAL ELEMENTO? ");
               scanf("%d",&anterior);
               addMeio(&lista, valor, anterior);
               break;
            case 4://EXCLUIR ELEMENTO
                printf("DIGITE UM VALOR A SER REMOVIDO: ");
                scanf("%d", &valor);
                removido = remover(&lista, valor);
                if(removido){
                    printf("ELEMENTO REMOVIDO: %d", removido->valorElemento);
                    free(removido);
                }//fim if
                else{
                    printf("ELEMENTO NÃO ENCONTRADO PARA REMOÇÃO");
                }
                break;
            case 5://BUSCAR INFORMAÇÃO
                printf("INFORME QUAL VALOR VOCÊ DESEJA BUSCAR: ");
                scanf("%d", &valor);
                removido = buscar(&lista, valor);
                if(removido){
                    printf("ELEMENTO ENCONTRADO: %d", removido->valorElemento);
                }//fim if
                else{
                    printf("ELEMENTO NÃO ENCONTRADO");
                }//fim else
                break;
            case 6://LISTAR ELEMENTOS
                imprimir(lista);
                break;
            case 0://SAIR
                opcao=0;
                break;
            default:
                printf("\nOpcao invalida\n");
       }
   }while(opcao != 0);
   return 0;
}