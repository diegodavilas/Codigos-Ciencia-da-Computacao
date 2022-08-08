#include<stdio.h>
int main(){
    int A, B, C, D;
    
    printf("Informe 4 inteiros diferentes:\n");
    scanf("\n%d \n%d \n%d \n%d", &A, &B, &C, &D);

    if(((A % 2) == 0) && ((A % 3) == 0 )){
        printf("O valor %d é divisível por 2 e 3\n", A);
    }
    if(((B % 2) == 0) && ((B % 3) == 0 )){
        printf("O valor %d é divisível por 2 e 3\n", B);
    }
    if(((C % 2) == 0) && ((C % 3) == 0 )){
        printf("O valor %d é divisível por 2 e 3\n", C);
    }
    if(((D % 2) == 0) && ((D % 3) == 0 )){
        printf("O valor %d é divisível por 2 e 3\n", D);
    }
}