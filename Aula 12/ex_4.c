/*
Faça um programa que multiplique por 5 a matriz A (preenchida a partir do teclado) para gerar a matriz C.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int matriz[3][3];

int l,c;
printf("Informe os valores da matriz A:\n");
  for(l=0;l<3;l++){
    for(c=0;c<3;c++){
  printf("Digite o valor de [%i][%i]",l+1,c+1);
  scanf("%i",&matriz[l][c]);
    }
  printf("\n");
  }

printf("Matriz C:\n");
for(l=0;l<3;l++){
  printf("\n");
    for(c=0;c<3;c++){

    printf("%i ", (5 * matriz[l][c]));
  }
    }

return 0;
}
