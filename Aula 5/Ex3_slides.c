/*
Calcule a média aritmética de 4 números reais que o usuário digitar.
 Imprima a média na tela apenas com 2 casas decimais.


*/

#include  <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float n1;
float raiz;

printf("Digite um número:");
scanf("%f",&n1);

raiz = sqrt(n1);
printf("A raiz do número digitado é: %.2f",raiz);

  return 0;
}
