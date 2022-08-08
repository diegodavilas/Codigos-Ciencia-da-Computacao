#include<stdio.h>
#include<math.h>
int main(){
    int base, expoente=0;
    printf("Infome a base: ");
    scanf("%d", &base);
    while(expoente<=15){
        printf("%.0f\n", pow(base, expoente));
        expoente++;
    }
}