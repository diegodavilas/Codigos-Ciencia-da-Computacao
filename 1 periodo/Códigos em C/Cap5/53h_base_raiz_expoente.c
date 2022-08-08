#include<stdio.h>
#include<math.h>
int main(){
    int base, expoente;
    printf("Infome a base: ");
    scanf("%d", &base);
    for(expoente=0; expoente<=15; expoente++){
        printf("%.0f\n", pow(base, expoente));
        ;
    }
}