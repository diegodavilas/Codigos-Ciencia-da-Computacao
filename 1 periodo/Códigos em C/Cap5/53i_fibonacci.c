#include<stdio.h>
int main(){
    int i, anterior=0, atual=1, proximo;
    for(i=1; i<=15; i++){
        proximo=atual+anterior;
        printf("%d\n", atual);
        anterior=atual;
        atual=proximo;
    }
}