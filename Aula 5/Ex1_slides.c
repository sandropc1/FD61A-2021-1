/*
Tendo como entrada de dados o total vendido por um funcionário no mês,
calcule a sua comissão e o salário bruto no mês.
Para isso, considere um salário base de R$1.200,00
e comissão de 10% sobre o total vendido.
*/

#include  <stdio.h>
#include <stdlib.h>

int main(){

float salario_base = 1200;
float total_vendido;
float comissao = 0.10;

printf("Digite o total vendido no mês:");
scanf("%f",total_vendido);


printf("O salário bruto do mês é igual a: %.2f",salario_base);

  return 0;
}
