#include<stdio.h>
#include<math.h>
int main(){
    int base=3, expoente=0;
    while(expoente<=15){
        printf("%.0f\n", pow(base, expoente));
        expoente++;
    }
}