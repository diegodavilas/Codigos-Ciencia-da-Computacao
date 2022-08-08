#include<stdio.h>
#include<math.h>
int main(){
    int base, expoente=0;
    printf("Infome a base: ");
    scanf("%d", &base);
    do{
        printf("%.0f\n", pow(base, expoente));
        expoente++;
    }
    while(expoente<=15);
}