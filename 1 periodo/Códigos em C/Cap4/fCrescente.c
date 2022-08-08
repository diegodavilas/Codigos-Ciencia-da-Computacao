#include<stdio.h>
int main(){
    int A, B, C, N;
    
    printf("Informe 3 inteiros diferentes:\n");
    scanf("\n%d \n%d \n%d", &A, &B, &C);
    
    if(A > B){
        N = B;
        B = A;
        A = N;
    }
    if(A > C){
        N = C;
        C = A;
        A = N;
    }
    if(B > C){
        N = C;
        C = B;
        B = N;
    }
    printf("%d %d %d", A, B, C);
}