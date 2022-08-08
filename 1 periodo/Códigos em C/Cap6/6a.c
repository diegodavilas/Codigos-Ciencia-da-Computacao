#include<stdio.h>
int main(){
    int i, a[10];
    for (i=0; i<=9; i++){
        printf("Informe o %d elemento: ", i);
        scanf("%d", &a[i]);
    }
    printf("%s%10s\n", "ELEMENTO", "VALOR");
    for (i=0; i<=9; i++){
        printf("%4d%12d\n", i, a[i]);
    }
}