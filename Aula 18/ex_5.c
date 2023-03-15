/*
Um problema típico em ciência da computação consiste em converter um número da s
ua forma decimal para binária. Crie um algoritmo recursivo para resolver esse
 problema.

●Solução trivial: x=0 quando o número inteiro já foi convertido para binário

●Passo da recursão: saber como x/2 é convertido. Depois, imprimir um dígito
(0 ou 1) dado o sucesso da divisão.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


void binario(int n1){

int termo;

if(n1 == 0){ //Caso base
   return;
}else{

  termo = n1 % 2;

if(termo == 0){
    binario(n1 / 2);
    printf("0");
  }else{
      binario(n1 / 2);
      printf("1");
      }
return;
   }//els
}

void main(){

int n1;

printf("Digite o número:");
scanf("%i",&n1);
printf("Número em binário:");

binario(n1);

printf("\n");

return;

}
