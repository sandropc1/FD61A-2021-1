/*
Crie um programa que forneça um menu com
duas opções. Caso o usuário digite 1, o programa
solicitará um número e verificará se o valor é par ou
impar. Caso o usuário digite 2, o programa solicitará
uma idade e verificará se pessoa é maior ou menor
de idade.
Veja o exemplo de menu abaixo:
Menu de programa:
1 – Verifica par/impar
2 – Verifica maior/menor de idade
Digite sua opção:
*/

#include <stdlib.h>
#include <stdio.h>

  int main(){

printf("Menu de programa:\n1 - Verificador par/impar.\n2 - Verificador maioridade.\n");

int opcao;
int numero_ou_idade;

printf("\nDigite a sua opção:");
scanf("%i",&opcao);

switch (opcao) {
      case 1:
            printf("Digite o número a ser verificado:");
            scanf("%i",&numero_ou_idade);

                if(numero_ou_idade % 2 == 0){
                  printf("O número é par!");
                }else{
                  printf("O número é impar!");
                }
                break;
      case 2:
              printf("Digite a idade a ser verificada:");
              scanf("%i",&numero_ou_idade);

                if(numero_ou_idade >= 0 && numero_ou_idade < 18){

                  printf("Você é menor de idade\n");
                }else{
                  if(numero_ou_idade >= 18){
                    printf("Você é maior de idade\n");
                  }else{
                    printf("Valor inválido\n");
                  }//else interno
                }//else externo
            break;
      default:
              printf("Opção inválida\n");


}
  return 0;
  }
