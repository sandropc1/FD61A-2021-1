/*
Faça um programa que leia e armazene dois vetores de tamanho 5.
Ao final o programa deve calcular e exibir o vetor soma;
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float vetor1 [5];
float vetor2 [5];
float soma[5];

int i;

for(i=0;i<5;i++){
  printf("Digite o valor %i do primeiro vetor:",i+1);
  scanf("%f",&vetor1[i]);

}

for(i=0;i<5;i++){
  printf("Digite o valor %i do segundo vetor:",i+1);
  scanf("%f",&vetor2[i]);
}
printf("O vetor soma é igual a:");
for(i=0;i<5;i++){
  soma[i] = vetor1[i] + vetor2[i];
  printf(" [%.1f]",soma[i]);
}

return 0;
}
