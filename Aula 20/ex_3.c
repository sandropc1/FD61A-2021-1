/*
3) Escreva uma função que receba como parâmetro dois vetores via referência ( A e B)
e o tamanho N. A função deve retornar o ponteiro para um vetor C de tamanho N
alocado dinamicamente, em que:
C[i] = A[i] * B[i]
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int *funcao(int *vetorA, int *vetorB,int n){

int *vetorC;
vetorC = (int*) malloc(n * sizeof(int));

for(int i = 0; i < n; i++){
  vetorC[i] = vetorA[i] * vetorB[i];
}

  return vetorC;
}

void main(){

int tamanho;
int *vetorA, *vetorB, *vetorC;

printf("Digite o tamanho N dos vetores:");
scanf("%i",&tamanho);

vetorA = (int*) malloc(tamanho * sizeof(int));
vetorB = (int*) malloc(tamanho * sizeof(int));

for (size_t i = 0; i < tamanho; i++) {
  printf("VetorA[%i]",i+1);
  scanf("%d",&vetorA[i]);
}

for (size_t i = 0; i < tamanho; i++) {
  printf("VetorB[%i]",i+1);
  scanf("%d",&vetorB[i]);
}

vetorC = funcao(vetorA, vetorB, tamanho);

for (size_t i = 0; i < tamanho; i++) {
  printf("%i\n",vetorC[i]);
}

return;
}


/
