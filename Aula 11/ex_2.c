/*
Crie um algoritmo que receba 10 números e os armazene em um vetor A. Em seguida,
 gere o vetor B onde cada elemento é o quadrado do valor da mesma posição no
 vetor A
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float vetor_a [10];
float vetor_b [10];

int i;

for(i=0;i<10;i++){
  printf("Digite o valor %i do vetor A:",i+1);
  scanf("%f",&vetor_a[i]);
}

printf("O vetor B é igual a:");

for(i=0;i<10;i++){
  vetor_b [i] = pow(vetor_a[i],2);
  printf("[%.1f]",vetor_b[i]);
}


return 0;
}
