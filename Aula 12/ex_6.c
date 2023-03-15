/*
Faça um programa que multiplique as matrizes A e D abaixo gerando matriz AD
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int matrizA [2][3] = {{3,7,10},{1,5,0}};
int matrizD [3][2] = {{1,2},{5,6},{2,3}};

int matrizAD [2][2];

int l,c;

for(l=0;l<2;l++){
  for(c=0;c<2;c++){

matrizAD[l][c] =  matrizA[l][0] * matrizD[0][c] +
matrizA[l][1] * matrizD[1][c] + matrizA[l][2] * matrizD [2][c];
  }
}

printf("Matriz AD:\n");
for(l=0;l<2;l++){
  printf("\n");
    for(c=0;c<2;c++){
      printf("%i ", matrizAD[l][c]);
  }
    }
    printf("\n");
return 0;
}
