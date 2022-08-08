#include<stdio.h>
int main(){    
    float N1, N2, N3, N4, MD, NE;
    printf("Digite a 1a NOTA: ");
    scanf("%f", &N1);
    printf("Digite a 2a NOTA: ");
    scanf("%f", &N2);
    printf("Digite a 3a NOTA: ");
    scanf("%f", &N3);
    printf("Digite a 4a NOTA: ");
    scanf("%f", &N4);
    MD = (N1+N2+N3+N4)/4;
    if (MD >= 7){
         printf("Aprovado com média %.1f", MD);
    }else {
        printf("Digite a NOTA DO EXAME: ");
        scanf("%f", &NE);
        MD = (NE+MD)/2;
        if (MD >= 5){
            printf("Aprovado em exame com média %.1f", MD);
        } else{
            printf("Reprovado com média %.1f", MD);
        }
    }
}