#include<stdio.h>
int main(){
    int i=1, anterior=0, atual=1, proximo;
    do{
        proximo=atual+anterior;
        printf("%d\n", atual);
        anterior=atual;
        atual=proximo;
        i++;
    }
    while(i<=15);
}