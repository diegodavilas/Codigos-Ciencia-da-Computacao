#include<stdio.h>
int main(){
    int i=1, anterior=0, atual=1, proximo;
    while(i<=15){
        proximo=atual+anterior;
        printf("%d\n", atual);
        anterior=atual;
        atual=proximo;
        i++;
    }
}