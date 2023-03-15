/*
Crie uma função que retorne x elevado a y através de operação de multiplicação.
A função recebe x e y por parâmetro
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int exponenciacao(int n1, int n2){


  if(n2 == 0){ //Caso base
   return 0;

 } else {
   if(n2 >= 2){
  n2--;

   return n1 * exponenciacao(n1, n2);
      }
   }//els
}

void main(){

int n1;
int n2;

  printf("Digite a base:");
  scanf("%i",&n1);

  printf("Digite o expoente:");
  scanf("%i",&n2);

int resultado = exponenciacao(n1,n2);

printf("\nO resultado da exponenciação é: %i \n",resultado);
return;

  }
