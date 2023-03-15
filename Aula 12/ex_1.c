/*
Crie e exiba uma matriz identidade com dimensões 5 x 5;
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int matriz [5][5] = {{1,0,0,0,0},{0,1,0,0,0},{0,0,1,0,0},{0,0,0,1,0},{0,0,0,0,1}};

int l,c;

for(l=0;l<5;l++){
printf("\n");
  for(c=0;c<5;c++){

  printf("%i ",matriz[l][c]);
}
  }
printf("\n");

  return 0;
}
