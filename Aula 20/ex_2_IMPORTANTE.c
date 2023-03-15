/*
Escreva uma função que receba um valor inteiro positivo N por parâmetro e
retorne o ponteiro para um vetor de tamanho N alocado dinamicamente. Se N for
negativo ou igual a zero, um ponteiro nulo deverá ser retornado
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int *aloca_vetor(int N){

int *vetor;

if(N <= 0){
  vetor = NULL;
  return vetor;
}

vetor = (int*) malloc(N * sizeof(int));

return vetor;
}

void main(){

int n;
int *vetor_gerado;

printf("Digite o tamanho do vetor:");
scanf("%d",&n);

vetor_gerado = aloca_vetor(n);

free(vetor_gerado);

return;
  }
