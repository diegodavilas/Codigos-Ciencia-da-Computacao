#include<stdio.h>
int main(){
    int A, B, C, D, E;
    printf("Digite 5 valores inteiros distintos:\n");
    scanf("\n%d \n%d \n%d \n%d \n%d", &A, &B, &C, &D, &E);
    if ((A > B)&&(A > C)&&(A > D)&&(A > E)){
        printf("%d é o maior\n", A);
    }
    if ((B > A)&&(B > C)&&(B > D)&&(B > E)){
        printf("%d é o maior\n", B);
    }
    if ((C > A)&&(C > B)&&(C > D)&&(C > E)){
        printf("%d é o maior\n", C);
    }
    if ((D > A)&&(D > B)&&(D > C)&&(D > E)){
        printf("%d é o maior\n", D);
    }
    if ((E > A)&&(E > B)&&(E > C)&&(E > D)){
        printf("%d é o maior\n", E);
    }
    if ((A < B)&&(A < C)&&(A < D)&&(A < E)){
        printf("%d é o menor\n", A);
    }
    if ((B < A)&&(B < C)&&(B < D)&&(B < E)){
        printf("%d é o menor\n", B);
    }
    if ((C < A)&&(C < B)&&(C < D)&&(C < E)){
        printf("%d é o menor\n", C);
    }
    if ((D < A)&&(D < B)&&(D < C)&&(D < E)){
        printf("%d é o menor\n", D);
    }
    if ((E < A)&&(E < B)&&(E < C)&&(E < D)){
        printf("%d é o menor\n", E);
    }
}