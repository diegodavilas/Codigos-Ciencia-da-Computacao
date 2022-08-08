#include<stdio.h>
int main()
{
  float nota1,nota2,nota3,nota4, media;
  int i;  
  do
  {
    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);
    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);
    printf("Digite a terceira nota: ");
    scanf("%f",&nota3);
    printf("Digite a quarta nota: ");
    scanf("%f",&nota4);
    media = (nota1 + nota2 + nota3 + nota4)/4;
    printf("Media do aluno = %.1f\n",media);
    
    printf("Digite 1 para continuar ou 2 para sair\n");
    scanf("%d", &i);
  
  }while (i==1);
}