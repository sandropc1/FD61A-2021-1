/*
Considere a função X abaixo:

int X(int a){
  if(a <=0) return0;
  else return a + X(a-1);
}//X

O que essa função faz? Escreva uma função não-recursiva que resolve o mesmo problema.

int funcaox(int a){
 if(a <= 0) return 0;
 else return a + funcaox(a-1);
}//funcaox

*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void main(){

int n1;
int soma;

printf("Digite um número:");
scanf("%i",&n1);

soma = n1;
n1--;

while( n1>0 ){
  soma = soma + n1;
  n1--;
}
printf("%i\n",soma);

return;
}
