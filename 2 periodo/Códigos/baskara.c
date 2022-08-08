#include<stdio.h>
#include<math.h>
//FUNÇAO QUE REALIZA A LEITURA E RETORNA UM INTEIRO
int leituraDeInteiro(){
    int inteiro;
    scanf("%d", &inteiro);
    return inteiro;
}

//FUNÇÃO QUE CALCULA O DELTA
int calculoDelta(int a, int b, int c){
    int delta=0;
    return delta = (b*b)-4*a*c;
}

//FUNÇÃO QUE IDENTIFICA AS RAÍZES REAIS
void raizesReais(int a, int b, int delta){
    float raiz1, raiz2;
    if (delta < 0){
        printf("Não há raiz real!");
    }else if (delta == 0){
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        printf("Uma raiz = %.1f", raiz1);
    }else{
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("Duas raizes %.1f, %.1f", raiz1, raiz2);
    }
}

int main(){
    int A, B, C;

    printf("Digite valores interos para A, B e C!\n" );
    printf("Valor para A: ");
    A = leituraDeInteiro();
    printf("Valor para B: ");
    B = leituraDeInteiro();
    printf("Valor para C: ");
    C = leituraDeInteiro();

    raizesReais(A, B, calculoDelta(A, B, C));
    return 0;
}