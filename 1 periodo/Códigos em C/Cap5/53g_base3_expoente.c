#include<stdio.h>
#include<math.h>
int main(){
    float base=3, expoente, resultado;
    for(expoente=0; expoente<=15; expoente++){
        printf("%.0f\n", pow(base, expoente));
    }
}