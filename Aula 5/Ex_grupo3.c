/*
Faça um programa que tenha como entrada: o número de horas, minutos e segundos
 atuais, informe quantos segundos faltam para chegar terminar o dia.
*/

#include <stdlib.h>

int main(){

  int horas,minutos,segundos;

  printf("Digite o horario atual (horas:minutos:segundos):");
  scanf("%d:%d:%d",&horas,&minutos,&segundos);

  int horas_segundos,minutos_segundos;
  horas_segundos = horas * 3600;
  minutos_segundos = minutos * 60;

  int segundos_passados = horas_segundos + minutos_segundos + segundos;

  int segundos_restantes = 86400 - segundos_passados;
  printf("Ainda restam %i segundos até o fim do dia!\n",segundos_restantes);
return 0;
}
