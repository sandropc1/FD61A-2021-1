#include <stdlib.h>
#include <stdio.h>
#include <math.h>

  int main(){

int numero;
int fatorial = 0;

printf("Digite um número: ");
scanf("%i",&numero);

if(numero < 0){
  printf("Número inválido\n");
}else{
  if (numero >= 0 && numero <=1){
    printf("O fatorial do número digitado é igual a: 1");
  }else{
fatorial = (numero * (numero - 1));
numero--;

while( numero > 1 ){
  numero--;
  fatorial = fatorial * numero;

    }

printf("O fatorial do número digitado é igual a: %i", fatorial);
  }
}
return 0;
}
