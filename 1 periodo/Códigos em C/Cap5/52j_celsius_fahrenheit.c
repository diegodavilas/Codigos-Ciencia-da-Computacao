#include<stdio.h>
int main(){
    float c=10, f;
    do{
        f=((c*9)/5)+32;
        printf("%.1f graus Celsius = %.1f Fahrenheit\n", c, f);
        c+=10;
    }
    while(c<=100);
}