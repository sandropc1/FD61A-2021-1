/*
Faça um algoritmo que implemente uma função que receba 3 números inteiros e
retorne o maior valor. Se algum número for negativo retorne -1;
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int maior(int n1, int n2, int n3){

int maior_num = 0;

int num[3];
num[0] = n1;
num[1] = n2;
num[2] = n3;

  for (int i=0; i < 3; i++) {

if(num[i]>maior_num){
maior_num = num[i];
  }
if(num[i]<0){
  maior_num = -1;
  }//if
}//for
  return maior_num;
}//maior

int main(){

int n1, n2, n3;
printf("Digite o 1° número:");
scanf("%i",&n1);

printf("Digite o 2° número:");
scanf("%i",&n2);

printf("Digite o 3° número:");
scanf("%i",&n3);

int maior_numero = maior(n1,n2,n3);

printf("%i\n",maior_numero);

return 0;
}
