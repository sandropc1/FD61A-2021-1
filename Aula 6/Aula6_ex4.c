/*
Faça um programa que calcule o imposto de renda a ser
pago tendo como entrada o salário de um empregado. O
imposto deve ser calculado da seguinte maneira:

imposto = salário x alíquota – parcela da dedução
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

  float salario;
  float imposto;

printf("Digite o salário:");
scanf("%f",&salario);

if(salario >= 0 && salario <= 1903.99){

  printf("Você está isento do imposto de renda!");

}else{
  if(salario >= 1903.99 && salario <= 2826.25){

    imposto = (salario * 7.5) - 142.80;
    printf("O imposto a ser pago é de: R$ %.2f",imposto);

  }else{
    if(salario >= 2826.66 && salario <= 3751.05){

      imposto = (salario * 15) - 354.80;
      printf("O imposto a ser pago é de: R$ %.2f",imposto);

    }else{
      if(salario >= 3751.06 && salario <= 4644.68){

        imposto = (salario * 22.5) - 636.13;
        printf("O imposto a ser pago é de: R$ %.2f",imposto);
      }else{

        imposto = (salario * 27.5) - 869.36;
        printf("O imposto a ser pago é de: R$ %.2f",imposto);

      }//quarto else
    }//terceiro else
  }//segundo else
}//primeiro else


  return 0;
}
