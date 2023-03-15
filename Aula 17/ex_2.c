#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct{
  int hora;
  int minuto;
  int segundo;
}Horario;

void converteHorario(int total_segundos, Horario* hor){

hor->hora = total_segundos / 3600;
hor->minuto = (total_segundos % 3600)/60;
hor->segundo = (total_segundos % 3600) % 60;

return;
}

int main(){

Horario hor;
int total_segundos;

printf("Digite a quantidade total de segundos:");
scanf("%i",&total_segundos);

converteHorario(total_segundos, &hor);

printf("%i:%i:%i",hor.hora,hor.minuto,hor.segundo);

return 0;
}
