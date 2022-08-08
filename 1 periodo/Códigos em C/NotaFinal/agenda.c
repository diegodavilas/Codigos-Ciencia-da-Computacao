#include<stdio.h>
#define TAMANHO 50
//criação do tipo da estrutura de dados
    typedef struct Sagenda{
        char nome[20];
        char telefone[15];
        char email[TAMANHO];
    }Tagenda;
    Tagenda cadastro[TAMANHO];
int i;

//localiza o primeiro endereço disponível para alocar um contato
int primeiroEnderecoDisponivel(){
    i=0;
    while (cadastro[i].nome[0] != '\0'){
        i++;
    }
    return i;
}

//captura a opção desejada no menu principal
int opcaoMenu(){
    int opcao;
    printf("\nOpção desejada: \n");
    scanf("%d", &opcao);
    return opcao;
}

//apresenta as opções do MENU
void apresentarMenu(){
    printf("\nEscolha uma das opções:\n");
    printf("%s%22s%12s\n", "1 - ADICIONAR CONTATO", "2 - LISTAR CONTATO", "3 - SAIR");
}

//inclui uma contato na agenda
int incluirContato(){
    int i=primeiroEnderecoDisponivel();
    if(i<50){
        printf("Informe um nome: ");
        scanf("%s", cadastro[i].nome);

        printf("Informe um telefone: ");
        scanf("%s", cadastro[i].telefone);

        printf("Informe um email: ");
        scanf("%s", cadastro[i].email);
    }else{
        printf("NÃO É POSSÍVEL ADICIONAR CONTATO\n");
    }
}

//lista os contatos cadastrados
int listarContato(){
    int quantidadeContatos = primeiroEnderecoDisponivel();
    if(quantidadeContatos>0){
        for(i=0; i<quantidadeContatos; i++){
            printf("=====================================\n");
            printf("Nome: %s\n", cadastro[i].nome);
            printf("Telefone: %s\n", cadastro[i].telefone);
            printf("Email: %s\n", cadastro[i].email);
        }
    }else{
        printf("\nNÃO HÁ CONTATOS PARA EXIBIR!\n");
    }    
}

//função principal
int main(){
    int opcaoEscolhida;
    do{
        apresentarMenu();
        opcaoEscolhida=opcaoMenu();
        switch (opcaoEscolhida){
        case 1:
            incluirContato();
            break;
        case 2:
            listarContato();
            break;
        case 3:
            break;
        default:
            printf("\nEscolha uma opção válida\n");
            break;
        }
    }while(opcaoEscolhida!=3);
}