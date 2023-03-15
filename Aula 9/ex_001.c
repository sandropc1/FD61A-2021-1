/*
Faça um programa que calcule a média para 5 alunos, sendo que cada aluno tem
2 notas (reais). O programa somente deverá aceitar notas no intervalo fechado de
 0 a 10, solicitando nova digitação quando necessário.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float nota1;
float nota2;
float media1;
float media2;
float media3;
float media4;
float media5;

//primeiro aluno
do{
  printf("Digite a primeira nota, do primeiro aluno:");
  scanf("%f",&nota1);

}while (nota1 < 0 || nota1 > 10);

do{
  printf("Digite a segunda nota, do primeiro aluno:");
  scanf("%f",&nota2);
}while (nota2 < 0 || nota2 > 10);

media1 = (nota1 + nota2)/2;
printf("A média do primeiro aluno é:%.2f\n",media1);

//segundo aluno

do{
  printf("Digite a primeira nota, do segundo aluno:");
  scanf("%f",&nota1);

}while (nota1 < 0 || nota1 > 10);

do{
  printf("Digite a segunda nota, do segundo aluno:");
  scanf("%f",&nota2);
}while (nota2 < 0 || nota2 > 10);

media2 = (nota1 + nota2)/2;

printf("A média do segundo aluno é:%.2f\n",media2);

//terceiro aluno
do{
  printf("Digite a primeira nota, do terceiro aluno:");
  scanf("%f",&nota1);

}while (nota1 < 0 || nota1 > 10);

do{
  printf("Digite a segunda nota, do terceiro aluno:");
  scanf("%f",&nota2);
}while (nota2 < 0 || nota2 > 10);

media3 = (nota1 + nota2)/2;

printf("A média do terceiro aluno é:%.2f\n",media3);

//quarto aluno
do{
  printf("Digite a primeira nota, do quarto aluno:");
  scanf("%f",&nota1);

}while (nota1 < 0 || nota1 > 10);

do{
  printf("Digite a segunda nota, do quarto aluno:");
  scanf("%f",&nota2);
}while (nota2 < 0 || nota2 > 10);

media4 = (nota1 + nota2)/2;

printf("A média do quarto aluno é:%.2f\n",media4);

//quinto aluno
do{
  printf("Digite a primeira nota, do quinto aluno:");
  scanf("%f",&nota1);

}while (nota1 < 0 || nota1 > 10);

do{
  printf("Digite a segunda nota, do quinto aluno:");
  scanf("%f",&nota2);
}while (nota2 < 0 || nota2 > 10);

media5 = (nota1 + nota2)/2;

printf("A média do quinto aluno é:%.2f\n",media5);

return 0;
}
