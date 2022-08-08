#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int fila[SIZE]; 

void adicionar(int f[], int info, int tamanho){
    int i;
    for (i = 0; i < tamanho; i++){
        if (f[i] == 0){
            f[i] = info;
            return;
        }
    }
    printf("\n\nFila cheia\n\n");
}

void listar(int f[], int tamanho){
    int i;
    printf("\n\nListando\n");
    for (i = 0; i < tamanho; i++){
        if (f[i] != 0)
            printf("%d ",f[i]);
    }
}

int buscar(int f[], int tamanho, int chave){
    int i;
    for (i = 0; i < tamanho; i++){
        if (f[i] == chave)
           return i;
    }
    return -1;
}

void remover(int f[], int tamanho){
    int i;
    for (i = 0;i < tamanho - 1;i++){
        f[i] = f[i + 1];
    }
    f[tamanho - 1] = 0;
}

void menu(){
    printf("\n1 = Adicionar \n2 = Listar \n3 = Buscar \n4 = Remover \n5 = Sair\n");
}

int ler_opcao () {
    int opcao;
    printf ("\nDigite sua Opcao: ");
    scanf ("%d", &opcao);
    setbuf (stdin, NULL);
    return opcao;
}

int main(int argc, char** argv) {
    int opcao, key, posicao, leitura;
    do{
        menu();
        opcao = ler_opcao();
        switch(opcao){
            case 1:
                printf("Informe o valor: ");
                scanf("%d",&leitura);
                if (leitura == 0)
                    break;        
                adicionar(fila,leitura,SIZE);
                break;
            case 2:
                listar(fila, SIZE);
                break;
            case 3:
                printf("\nInforme a chave da busca: ");
                scanf("%d",&key);

                int posicao = buscar(fila, SIZE,key);
                if (posicao == -1)
                    printf("Chave da busca não encontrada na fila\n\n");
                else
                    printf("Chave encontrada na posição: %d\n\n", posicao);
                
                break;
            case 4:
                remover(fila, SIZE);
                break;default:
            if(opcao != 5)
            printf("\nOpcao invalida\n");
        }
    }while(opcao != 5);
}
