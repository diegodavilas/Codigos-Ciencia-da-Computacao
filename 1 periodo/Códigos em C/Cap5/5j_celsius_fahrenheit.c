#include<stdio.h>
int main(){
    float c=10, f;
    while(c<=100){
        f=((c*9)/5)+32;
        printf("%.1f graus Celsius = %.1f Fahrenheit\n", c, f);
        c+=10;
    }
}