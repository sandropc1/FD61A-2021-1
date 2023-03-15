/*
Faça um programa que receba um número e
determine se ele é um número par ou ímpar.
(Para isso utilize o operador % que retorna o resto da divisão)
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float A;
float B;
float C;

  printf("Digite o coeficiente A:");
  scanf("%f",&A);

  printf("Digite o coeficiente B:");
  scanf("%f",&B);

  printf("Digite o coeficiente C:");
  scanf("%f",&C);

float delta;
float eB;
float x1;
float x2;

  eB = pow(B,2);
  delta = sqrt(eB - (4 * A * C));

if(delta > 0){

    x1 = (-B + delta) / (2 * A);
    x2 = (-B - delta) / (2 * A);

      printf("A primeira raiz é igual a:%.2f\n",x1);
      printf("A segunda raiz é igual a:%.2f",x2);

    }else{
      if(delta == 0){

        x1 = x1 = (-B + delta) / (2 * A);
        printf("Existe apenas uma raiz, que possui valor:%.2f\n",x1);

      }else{
        printf("A equação não possui raizes.");

      }//else interno

    }//else externo

    return 0;
}
