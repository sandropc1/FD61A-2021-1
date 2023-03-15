/*
Crie um programa que contenha um vetor de inteiros de tamanho 5. Utilizando
aritmética de ponteiros, leia os dados do teclado e exiba seus valores
multiplicado por 2. Em seguida, exiba o endereço de memória das posições que
contém valores pares.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

int vetor[5];

int *ptrVet = vetor;

for (size_t i = 0; i < 5; i++) {
  printf("Digite o valor do %d° termo do vetor:",i+1);
  scanf("%d",&*(ptrVet + i));
}//if

printf("\n");

for (size_t i = 0; i < 5; i++){
  printf("O valor do %d° termo do vetor multiplicado por 2 é: %d\n",i+1,*(ptrVet + i) + *(ptrVet + i));
}//for

printf("\n");

for (size_t i = 0; i < 5; i++) {

  if(*(ptrVet + i) % 2 == 0){
    printf("O %d° termo do vetor é par e está armazenado no endereço de memória: %d\n",i+1,&*(ptrVet + i));
  }//if
}//for

  return 0;
}
