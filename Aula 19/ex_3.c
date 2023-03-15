/*
Crie um programa que contenha uma matriz (3x3) de float. Imprima o endereço de
cada posição dessa matriz
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

float matriz[3][3];

for (size_t i = 0; i < 3; i++) {
  for (size_t j = 0; j < 3; j++) {
    printf("Endereço de memória do termo A%d,%d da matriz A:%d\n",i+1,j+1,&matriz[i][j]);
  }
}

return 0;
}
