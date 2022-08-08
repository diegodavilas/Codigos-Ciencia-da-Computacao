#include<stdio.h>
#include<math.h>
int main(){
    int base=3, expoente=0;
    do{
        printf("%.0f\n", pow(base, expoente));
        expoente++;
    } while (expoente<=15);
}