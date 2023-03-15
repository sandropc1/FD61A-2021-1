/*
Faça um programa que mostre n elementos da sequência de Fibonacci.
O valor de n é passado para o programa.
O primeiro termo é 0, e o segundo termo é 1, os demais devem seguir
a fórmula tn = tn-1 + tn-2
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int fst = 0;
int scd = 1;
int n;
int contador;
int tn;

printf("Digite um número:");
scanf("%i",&n);

printf("Sequência de Fibonacci:\n");
if(n >= 1){
  printf("%i\n",fst);
}//primeiro if
    if(n >= 2){
        printf("%i\n",scd);
      }//segundo if

for(contador = 3 ; contador <= n ; contador ++ ){

  tn = fst + scd;
  fst = scd;
  scd = tn;

printf("%i\n",tn);
  }

  return 0;
}
