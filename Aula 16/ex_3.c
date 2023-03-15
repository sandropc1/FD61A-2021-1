/*
Escreva um procedimento que recebe por parâmetro as 3 notas de um aluno e uma
letra. Se a letra for A, o procedimento calcula a média aritmética das notas do
aluno, se for P, a sua média ponderada (pesos: 5, 3 e 2) e se for S, a soma das
 notas. O valor calculado também deve ser retornado e exibido na função main.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


float media_arit(float n1, float n2, float n3){//A
float media = (n1 + n2 + n3)/3;
return media;
}

float media_ponderada(float n1, float n2, float n3){//P
float media = ((n1*5) + (n2*3) + (n3*2))/10;
return media;
}

float soma(float n1, float n2, float n3){//S
float soma_n = n1 + n2 + n3;
return soma_n;
}

int main(){

float n1, n2, n3;
char opcao;
float resultado;

printf("Menu do programa:\nA - Calculo de média aritmética.\nP - Cálculo de média ponderada.\nS - Soma das notas.\n");
  scanf("%c",&opcao);

switch (opcao) {
  case 'A':
  case 'a':
  printf("Digite a 1° nota:");
    scanf("%f",&n1);
  printf("Digite a 2° nota:");
    scanf("%f",&n2);
  printf("Digite a 3° nota:");
    scanf("%f",&n3);
resultado = media_arit(n1,n2,n3);
printf("A média aritmética das notas é: %.2f",resultado);
break;
  case 'P':
  case 'p':
  printf("Digite a 1° nota:");
    scanf("%f",&n1);
  printf("Digite a 2° nota:");
    scanf("%f",&n2);
  printf("Digite a 3° nota:");
    scanf("%f",&n3);
  resultado = media_ponderada(n1,n2,n3);
  printf("A média ponderada das notas é: %.2f",resultado);
break;
  case 'S':
  case 's':
  printf("Digite a 1° nota:");
    scanf("%f",&n1);
  printf("Digite a 2° nota:");
    scanf("%f",&n2);
  printf("Digite a 3° nota:");
    scanf("%f",&n3);
  resultado = soma(n1,n2,n3);
  printf("A soma das notas é: %.2f",resultado);
break;
  default:
  printf("Opção inválida.");
break;
}
return 0;
}
