#include<stdio.h>
int main(){
    int i, a[8], b[8];
    for (i=0; i<=7; i++){
        printf("Informe o %d elemento: ", i);
        scanf("%d", &a[i]);
        b[i]=a[i]*3;
    }
    printf("%s%10s\n", "ELEMENTO", "VALOR");
    for (i=0; i<=7; i++){
        printf("%4d%12d\n", i, b[i]);
    }
}