/*
Construa um programa que leia uma matriz de tamanho 5 x 5 e escreva a localização (linha, coluna) do maior valor encontrado na matriz
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int matriz[5][5];
  int maior = 0;
  int l,c;
  int cord1,cord2;

  for(l=0;l<5;l++){
    for(c=0;c<5;c++){
  printf("Digite o valor de [%i][%i]",l+1,c+1);
  scanf("%i",&matriz[l][c]);
  if(matriz[l][c] > maior){
    maior = matriz[l][c];
    cord1=l;
    cord2=c;
  }
    }
  printf("\n");
  }

printf("O maior valor encontrado na matriz é %i no termo [%i][%i]",maior,cord1+1,cord2+1);
return 0;
}
