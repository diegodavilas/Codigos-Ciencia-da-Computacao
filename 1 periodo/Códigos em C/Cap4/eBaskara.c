#include<stdio.h>
#include<math.h>
int main(){
    int A, B, C, D;
    float R1, R2;
    
    printf("Digite valores interos para A, B e C!\n" );
    printf("Valor para A: ");
    scanf("%d", &A);
    printf("Valor para B: ");
    scanf("%d", &B);
    printf("Valor para C: ");
    scanf("%d", &C);

    D = (B*B)-4*A*C;

    if (D < 0){
        printf("Não há raiz real!");
    }else if (D == 0){
        R1 = (-B + sqrt(D)) / (2 * A);
        printf("Uma raiz = %.1f", R1);
    }else{
        R1 = (-B + sqrt(D)) / (2 * A);
        R2 = (-B - sqrt(D)) / (2 * A);
        printf("Duas raizes %.1f, %.1f", R1, R2);
    }
}