/*
Faça um menu que mostre 3 opções

Menu do programa:
1 - Teste 1
2 - Teste 2
3 – Sair do programa
Digite sua opção:

A primeira opção imprime o texto “Teste1” e mostra o menu novamente.
A segunda opção imprime “Teste2” e mostra o menu novamente.
A terceira opção finaliza o programa.
Caso digite uma opção diferente, deve mostrar uma mensagem de erro e mostrar o menu novamente.

*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

  int main(){

int ope;

while(ope = 2){

printf("\nMenu do programa:\n1 - Teste 1\n2 - Teste 2\n3 - Sair do programa\n");

printf("Digite a sua opção:");
scanf("%i",&ope);

switch(ope) {

  case 1:

        printf("Teste 1\n");
        break;

case 2:

        printf("Teste 2\n");
        break;

case 3:

return 0; //encerra o programa

default:

printf("Opção inválida\n");

}//switch
ope = 2; //mantém o while ativo
}//while

return 0;
  }
