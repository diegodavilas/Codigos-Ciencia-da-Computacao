#include<stdio.h>
int main(){
    int base=15;
    do{    
        printf("%d ao quadrado = %d\n", base, base*base);
        base++;        
    }while (base <= 200);
}