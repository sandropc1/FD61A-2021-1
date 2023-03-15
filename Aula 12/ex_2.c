/*
Faça um algoritmo que leia uma matriz 3 por 3 (3x3) e retorne a soma dos elementos
da sua diagonal principal e da sua diagonal secundária;
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int matriz [3][3];
int diag_pri;
int diag_sec;

int l,c;

for(l=0;l<3;l++){
  for(c=0;c<3;c++){
printf("Digite o valor de [%i][%i]",l+1,c+1);
scanf("%i",&matriz[l][c]);
  }
printf("\n");
}

diag_pri = matriz[0][0] + matriz[1][1] + matriz[2][2];
diag_sec = matriz[0][2] + matriz[1][1] + matriz[2][0];

printf("A soma dos elementos da diagonal principal é igual a: %i\n",diag_pri);
printf("A soma dos elementos da diagonal secundária é igual a: %i\n",diag_sec);
return 0;
}
