#include<stdio.h>
int main(){
    //DECLARAÇÃO DAS MATRIZES
    int a[20], b[20], c[20];
    //DECLARAÇÃO DO CONTADOR
    int i;
    
    printf("MONTANDO A MATRIZ 'a'");
    //LEITURA DOS ELEMENTOS DA MATRIZ A
    for(i=0; i<=19; i++){
        scanf("%d",&a[i]);
    }
    
    printf("MONTANDO A MATRIZ 'b'");
    //LEITURA DOS ELEMENTOS DA MATRIZ B 
    for(i=0; i<=19; i++){
        scanf("%d",&b[i]);
    }

    //MONTANDO A MATRIZ C
    for(i=0; i<=19; i++){
        c[i]=a[i]-b[i];
    }

    //MOSTRANDO A MATRIZ C
    for(i=0; i<=19; i++){
        printf("%d ", c[i]);
    }
}