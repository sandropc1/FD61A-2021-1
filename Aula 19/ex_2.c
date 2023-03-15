/*
Crie um programa que contenha um vetor float (tamanho 10). Imprima o endereço
de cada posição desse vetor.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

float vetor[10];

for (size_t i = 0; i < 10; i++) {
  printf("Endereço de memória da posição %d: %d\n",i+1,&vetor[i]);
}

  return 0;
}
