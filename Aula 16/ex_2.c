/*
Elabore uma função que receba por parâmetro o sexo (char) e a altura de uma
pessoa (real), calcule e retorne seu peso ideal. Para isso, utilize as fórmulas
 a seguir:

Para homens: (72.7*altura) - 58
Para mulheres: (62.1*altura) – 44.7
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

float peso_masc(float altura){//função de peso para homens
  float peso = (72.7 * altura) - 58;
return peso;
}

float peso_fem(float altura){//função de peso para damas
  float peso = (62.1 * altura) - 44;
return peso;
}

float main(){//função main

float altura;
float peso;
char sexo;

  printf("Menu do programa:\n");
  printf("Qual o sexo da pessoa?\nM - Masculino\nF - Feminino\n");
  scanf("%c",&sexo);

  switch (sexo) {
    case 'M':
    case 'm':
        printf("Insira a altura da pessoa:");
        scanf("%f",&altura);
      peso = peso_masc(altura);
printf("O peso ideal dessa pessoa é: %.2f",peso);
    break;

    case 'F':
    case 'f':
printf("Insira a altura da pessoa:");
        scanf("%f",&altura);
      peso = peso_fem(altura);
printf("O peso ideal dessa pessoa é: %.2f",peso);
    break;
  }
return 0;
}
