#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int tamanho;

printf("Digite o tamanho:");
scanf("%i",&tamanho);

for ( int x = 0 ; x < tamanho ; x++){
  printf("\n");
  for ( int y = 0 ; y < tamanho ; y++){
    printf("#");

    }//for interno
}//for externo
printf("\n");
return 0;
}
