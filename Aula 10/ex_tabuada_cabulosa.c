/*
Utilizando a estrutura do laço for aninhado, crie um programa que exiba a tabuada
 de todos os números  de 1 a 10 no seguinte formato:

Tabuada do 1:
1 x 1 =  1
1 x 2 =  2
1 x 3 =  3
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

int multi;

for ( int x = 1 ; x <= 10 ; x++){
  printf("\nTabuada do %i:\n",x);

    for ( int y = 1 ; y <= 10 ; y++){
multi = x *y;
printf(" %i * %i = %i\n",x,y,multi);

   }//for interno
}//for externo


return 0;
}
