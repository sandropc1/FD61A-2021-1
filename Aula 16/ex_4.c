/*
Faça uma função que receba a média final de um aluno por parâmetro e retorne o
seu conceito, conforme a tabela abaixo:

Nota Conceito
[ 9 - 10]  A
[ 7 – 9 [  B
[ 5 - 7 [  C
[ 0 – 5 [  D
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

char conceito(float media){
char Conceito;

if(media >= 9 && media <= 10){
  Conceito = 'A';
}else{
  if(media >= 7 && media < 9){
    Conceito = 'B';
  }else{
    if(media >= 5 && media < 7){
      Conceito = 'C';
    }else{
      if(media>=0 && media < 5){
        Conceito = 'D';
      }//else4
    }//else3
  }//else2
}//else1
  return Conceito;
}

int main(){
float media;
char conceito_main;

  printf("Digite a média final do aluno:");
  scanf("%f",&media);
if(media < 0 || media > 10){
  printf("Opção inválida.\n");
}else{
  conceito_main = conceito(media);
printf("O conceito do aluno é: %c\n",conceito_main);
}

  return 0;
}
