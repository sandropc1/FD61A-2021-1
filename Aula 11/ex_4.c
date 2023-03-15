/*
Crie e inicialize um vetor de inteiros de tamanho 8. Faça a soma dos seus
elementos, e apresente o resultado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int vetor [8] = {1,2,3,4,5,6,7,8};
int soma = 0;
int i;

for(i=0;i<8;i++){

soma = soma + vetor[i];
}

printf("A soma dos elementos do vetor é: %i",soma);
return 0;
}
