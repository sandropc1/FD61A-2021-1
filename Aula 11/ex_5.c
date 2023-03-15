/*
Dado dois vetores, A (4 elementos) e B (5 elementos), faça um programa que
imprima todos os elementos comuns aos dois vetores.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int vetor_a [4];
int vetor_b [5];

int i,q,r;

for(i=0;i<4;i++){
  printf("Digite o valor %i do primeiro vetor:",i+1);

  scanf("%i",&vetor_a [i]);
}

for(i=0; i<5; i++){
  printf("Digite o valor %i do segundo vetor:",i+1);

  scanf("%i",&vetor_b [i]);
}

for(q=0;q<4;q++){
  for(r=0;r<5;r++){
    if(vetor_a [q] == vetor_b [r] ){
      printf("O valor %i é comum aos dois vetores.\n",vetor_b [r]);
    }
  }
}

  return 0;
}
