/*
Crie uma calculadora usando a instrução switch, que pergunte qual das operações
básicas quer fazer (+, -, * e /), em seguida peça os dois números e mostre o
resultado da operação matemática entre eles.
*/
#include <stdlib.h>
#include <stdio.h>


  int main(){

printf("Calculadora:\n+: Soma;\n-: subtração\n*: multiplicação\n/: divisão\n");

char ope;
float n1;
float n2;

float soma;
float sub;
float multi;
float divi;


printf("Digite a conta a ser realizada:");
scanf("%f%c%f",&n1,&ope,&n2);

switch(ope){

          soma = n1 + n2;
          printf("A soma dos números é igual a: %.2f\n", soma);
            break;
    case '-':

          sub = n1 - n2;
          printf("A subtração dos números é igual a: %.2f\n", sub);
            break;
    case '*':

          multi = n1 * n2;
          printf("A multiplicação dos números é igual a: %.2f\n", multi);
            break;
    case '/':

      if(n2 != 0){
            divi = n1 / n2;
            printf("A divisão dos números é igual a: %.2f\n",divi);
        }else{
          printf("A divisão não pode ser realizada, denominador igual a zero\n");
        }
          break;
  default:
      printf("Opção inválida");
}
  return 0;
  }
