/*
Crie uma função que retorne o fatorial de um número passado por parâmetro.

fatorial(n):

=1 se n=0

= n x fatorial (n-1) se n>0


*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int fatorial(int n1){

if(n1 <= 0){ //Caso base
   return 1;
} else {

return n1 * fatorial(n1 - 1);
   }//els
}

void main(){

int n1;
int n2;

  printf("Digite o número:");
  scanf("%i",&n1);

int resultado = fatorial(n1);

printf("\nO fatorial do número digitado é: %i \n",resultado);
return;

  }
