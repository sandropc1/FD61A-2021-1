/*
Escreva um programa que contenha duas variáveis inteiras. Compare os endereços
e exiba o endereço e o conteúdo do maior endereço.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

int n1 = 0;
int n2 = 1;

if(&n1 > &n2){
printf("Maior endereço: %d\nConteúdo do maior enderço:%i\n",&n1,n1);

}else{
  printf("Maior endereço: %d\nConteúdo do maior enderço:%i\n",&n2,n2);
}


return 0;
}
