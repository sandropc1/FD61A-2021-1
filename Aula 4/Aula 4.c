#include  <stdio.h>
#include <stdlib.h>

int main(){

float velocidade = 80;
float tempo_min = 35;
float consumo = 12;

float tempo_horas = tempo_min / 60;
float distancia = tempo_horas * velocidade;
float litros = distancia / consumo;


printf("Tempo em horas:%.2f\n",tempo_horas);
printf("Distância da viagem:%.2f\n",distancia);
printf("O consumo foi de:%.2f litros\n",litros);

  return 0;
}
