/*
Faça um programa que receba valores enquanto eles estiverem no intervalo de 500
a 1000. Ao receber um valor fora da faixa, o programa deverá parar de solicitar
valores, exibir quantos valores válidos foram digitados e finalizar.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float num;
int contador = 0;
printf("Digite números dentro do intervalo de 500 a 1000:");

do{
  scanf("%f",&num);
if(num >= 500 && num <=1000){
  contador++;
}
}while(num >= 500 && num <=1000);

printf("Foram digitados %i números válidos",contador);

  return 0;
}
