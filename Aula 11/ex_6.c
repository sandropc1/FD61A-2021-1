/*
Faça um programa que receba e armazene 20 números em um vetor.

Em seguida exiba:

–Quantos números são iguais a 30;
–Quantos números são maior que a média;
–Quantos números são iguais à media;


*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int vetor [20];
float media = 0;
int i;

for(i=0;i<20;i++){
  printf("Digite o valor %i do vetor:",i+1);
    scanf("%i",&vetor[i]);
  media = media + vetor[i];
}
media = media / 20;
printf("A média dos elementos do vetor é: %.2f\n",media);

for(i=0;i<20;i++){
  if(vetor[i] == media){
    printf("O elemento %i é igual a média\n",i+1);
  }

  if(vetor[i] > media){
      printf("O elemento %i é maior que a média\n",i+1);
  }

  if(vetor[i] == 30){
    printf("O elemento %i é igual a 30\n",i+1);
}

  }
return 0;
}
