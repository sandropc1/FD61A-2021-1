/*
Leia um vetor A com 10 elementos inteiros correspondentes as idades de um grupo
de pessoas. Escreva um programa que determine e escreva a quantidade de pessoas
 que possuem idade superior a 35 anos
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int idade [10];

int i;
int q;

for(i=0;i<10;i++){

printf("Digite a idade número %i:",i+1);
scanf("%i",idade[i]);

if(idade[i]>35){
  q++;
  }
}
printf("Existem %i pessoas com idade superior a 35 anos",q);

  return 0;
}
