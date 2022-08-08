#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char nome[50];
    double fone;
}Contato;

void menu();

int ler_opcao ();

void listar_contatos(Contato **c, int qnt);

int add_contato(Contato **c, int qnt, int tam);

void busca_contato(Contato **c, int qnt);

void ordenar_agenda(Contato **c, int qnt);

int excluir_contato(Contato **c, int qnt);

void salvar_agenda(Contato **c, int qnt, char arq[]);

int ler_arquivo(Contato **c, char arq[]);

int main(){
    Contato *agenda[50];
    char arquivo[] = {"agenda.txt"};
    int opcao, tam = 50, qnt = 0;
    do{
        menu();
        opcao = ler_opcao();
        switch(opcao){
            case 1:
                qnt = ler_arquivo(agenda, arquivo);
                qnt += add_contato(agenda, qnt, tam);
                ordenar_agenda(agenda, qnt);
                salvar_agenda(agenda, qnt, arquivo);
                break;
            case 2:
                qnt = ler_arquivo(agenda, arquivo);
                listar_contatos(agenda, qnt);
                break;
            case 3:
                qnt = ler_arquivo(agenda, arquivo);
                busca_contato(agenda, qnt);
                break;
            case 4:
                qnt = ler_arquivo(agenda, arquivo);
                listar_contatos(agenda, qnt);
                qnt = excluir_contato(agenda, qnt);
                salvar_agenda(agenda, qnt, arquivo);
                break;default:
            if(opcao != 5)
            printf("\nOpcao invalida.\n");
        }
    }while(opcao != 5);
    return 0;
}

void menu(){
    printf("\n1 = Adicionar Contato\n2 = Listar Contatos\n3 = Buscar Contato\n4 = Excluir Contato\n5 = Sair\n");
}
    
int ler_opcao () {
    int opcao;
    printf ("\nDigite sua Opcao: ");
    scanf ("%d", &opcao);
    setbuf (stdin, NULL);
    return opcao;
}

void listar_contatos(Contato **c, int qnt){
    int i;
    printf("\nLista de Contatos:\n");
    printf("===============================\n");
    for(i = 0; i < qnt; i++){
    printf("%d = %s \t%.0lf\n", i+1, c[i]->nome, c[i]->fone);}
    printf("===============================\n");
}

int add_contato(Contato **c, int qnt, int tam){
    if(qnt < tam){
        Contato *novo = malloc(sizeof(Contato));
        printf("\nDigite o nome do contato: ");
        scanf("%50[^\n]", novo->nome);
        printf("\nDigite o numero do telefone: ");
        scanf("%lf", &novo->fone);
        getchar();
        c[qnt] = novo;
        return 1;
    }
    else{
        printf("\n\tImpossivel novo cadastro. Agenda Cheia!\n");
        return 0;
    }
}

void busca_contato(Contato **c, int qnt){
    int i;
    char aux[50];
    printf("\n===============================");
    printf("\nQual contato deseja buscar? ");
    scanf("%[^\n]s", aux);
    getchar();
    for(i=0; i<qnt;i++){
        if(strcmp(aux,c[i]->nome)==0){
            printf("\n%s \t%.0lf\n",c[i]->nome, c[i]->fone);
            break;
        }
    }
    if(i==qnt) {
        printf("\n===============================");
        printf("\nContato não localizado");
        printf("\n===============================");
    }
}

void ordenar_agenda(Contato **c, int qnt){
    int i,j;
    Contato *aux;
    for(i=0; i<qnt;i++){
        for(j=0;j<qnt-1;j++){
            if(strcmp(c[j]->nome,c[j+1]->nome)>=0){
                aux = c[j];
                c[j] = c[j+1];
                c[j+1] = aux;
            }
        }
    }
}

int excluir_contato(Contato **c, int qnt){
    int i,j;
    char aux[50];
    printf("\nQual o contato deseja excluir? ");
    scanf("%[^\n]s", aux);
    getchar();
    for(i=0; i<qnt;i++){
        if(strcmp(aux,c[i]->nome)==0){
            for(j=i;j<qnt;j++) {
                c[j] = c[j+1];
            }
            break;
        }
    }
    if(i==qnt) {
        printf("\n===============================");
        printf("\nContato nao existe na agenda");
        printf("\n===============================\n");
        return qnt;
    }
    qnt--;
    return qnt;
}

void salvar_agenda(Contato **c, int qnt, char arq[]){
    FILE *file = fopen(arq, "w");
    int i;
    if(file){
        fprintf(file, "%d\n", qnt);
        for(i = 0; i < qnt; i++){
            fputs(c[i]->nome, file);
            fputc('\n', file);
            fprintf(file, "%.0lf\n", c[i]->fone);
        }
        fclose(file);
    }
    else
    printf("\nImpossível acessar e ou criar o arquivo!\n");
}

int ler_arquivo(Contato **c, char arq[]){
    FILE *file = fopen(arq, "r");
    int qnt = 0, i;
    Contato *novo = malloc(sizeof(Contato));if(file){
        fscanf(file, "%d\n", &qnt);
        for(i = 0; i < qnt; i++){
            fscanf(file, "%50[^\n]", novo->nome);
            fscanf(file, "%lf\n", &novo->fone);
            c[i] = novo;
            novo = malloc(sizeof(Contato));
        }
        fclose(file);
    }
    else {
        if(qnt!=0){
            printf("\nImpossível acessar e ou criar o arquivo!\n");
        }
    }
    return qnt;
}