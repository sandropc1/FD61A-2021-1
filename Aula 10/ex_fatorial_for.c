/*
Faça um programa que calcule o fatorial de um número a ser digitado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int num;
int fatorial;

printf("Digite um número:");
scanf("%i",&num);

for(fatorial = 1 ; num != 0 ; num * (num - 1), num--){

fatorial = fatorial * num;
  }

printf("%i\n",fatorial);

  return 0;
}
