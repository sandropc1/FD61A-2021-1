/*
Crie uma enumeração representando os meses do ano. Agora, escreva um programa
que leia um valor inteiro do teclado e exiba o nome do mês correspondente e a
quantidade de dias que ele possui.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef enum  {JANEIRO = 1, FEVEREIRO,MARCO,ABRIL,MAIO,JUNHO,JULHO,AGOSTO,SETEMBRO,OUTUBRO,NOVEMBRO,DEZEMBRO} meses;

int main(){

int escolha;

printf("Menu do programa:\n");

printf("1-Janeiro\n2-Fevereiro\n3-Março\n4-Abril\n5-Maio\n6-Junho\n");
printf("7-Julho\n8-Agosto\n9-Setembro\n10-Outubro\n11-Novembro\n12-Dezembro\n\n");

printf("Digite o número correspondente ao mês desejado:\n");
scanf("%i",&escolha);

switch (escolha) {

  case JANEIRO:
  printf("Janeiro: 31 dias\n");
break;
  case FEVEREIRO:
  printf("Fevereiro: 29 dias\n");
break;
  case MARCO:
  printf("Março: 31 dias\n");
break;
  case ABRIL:
  printf("Abril: 30 dias\n");
break;
  case MAIO:
  printf("Maio: 31 dias\n");
break;
  case JUNHO:
  printf("Junho: 30 dias\n");
break;
  case JULHO:
  printf("Julho: 31 dias\n");
break;
  case AGOSTO:
  printf("Agosto: 31 dias\n");
break;
  case SETEMBRO:
  printf("Setembro: 30 dias\n");
break;
  case OUTUBRO:
  printf("Outubro: 31 dias\n");
break;
  case NOVEMBRO:
  printf("Novembro: 30 dias\n");
break;
  case DEZEMBRO:
  printf("Dezembro: 31 dias\n");
break;
  default:
  printf("Opção inválida!\n");
}

return 0;
}
