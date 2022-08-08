#include<stdio.h>
int main(){
    float c, f;
    for(c=10; c<=100; c+=10){
        f=((c*9)/5)+32;
        printf("%.1f graus Celsius = %.1f Fahrenheit\n", c, f);
    }
}