#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int fatorial(int num){

int fatorial;
fatorial = num;

for ( int i= 0; num > 1; num--) {
fatorial = fatorial * (num - 1);
  }
return fatorial;
}

int main(){
int num;
   printf("Digite o número:");
   scanf("%i",&num);
if(num == 0){
  printf("Fatorial de %i é: 1\n",num);
}else{
  if(num < 0 ){
    printf("Número inválido.");
  }else{
    int resultado = fatorial(num);
    printf("Fatorial de %i é: %i\n",num,resultado);
  }
}
return 0;
}
