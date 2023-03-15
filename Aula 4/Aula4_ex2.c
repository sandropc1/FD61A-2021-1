#include  <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

  float valor_inicial = 500;
  float juros = 0.01;
  float tempo = 3;

  float montante = 500 * pow(1.01,3);
  printf("O montante após 3 meses é de: %.2f\n",montante);


return 0;
}
