#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/*
FaÃ§a um programa que controla o consumo de energia dos eletrodomÃ©sticos de uma casa e:

âCrie e leia 5 eletrodomÃ©sticos que contÃ©m nome (mÃ¡ximo 15 letras), potÃªncia (real, em kW) e tempo ativo por dia (real, em horas).

âLeia um tempo t (em dias),
calcule e mostre o consumo total na casa e o consumo relativo de cada eletrodomÃ©stico (consumo/consumo total) nesse perÃ­odo de tempo.
Apresente este Ãºltimo dado em porcentagem.
*/
struct Eletrodomestico{
  char nome[16];
  float potencia;
  float tempo_ativo;
};

int main(){
  setlocale(LC_ALL,"");
  struct Eletrodomestico eletrodomestico[5];
  int dias;
  float consumo[5];
  float consumo_total=0;
  float consumo_relativo[5];

  //Eletrodomestico 1

  for (int i = 0; i < 5; i++) {

  printf("Insira o nome do %i° eletrodoméstico a ser registrado.\n",i+1);
  fgets(eletrodomestico[i].nome,16, stdin);
  eletrodomestico[i].nome[strcspn(eletrodomestico[i].nome,"\n")]='\0';
  setbuf(stdin, NULL);

  printf("Insira a potencia do aparelho.\n");
  scanf("%f",&eletrodomestico[i].potencia);

  printf("Insira a quantidade de horas em que o aparelho fica ativo.\n");
  scanf("%f",&eletrodomestico[i].tempo_ativo );
  setbuf(stdin,NULL);
}

  //Leia o tempo
  system("cls");
  printf("Insira a quantidade de dias que os aparelhos serÃ£o usado.\n");
  scanf("%i",&dias);

  //calculo do consumo
  for (int i = 0; i < 5; i++) {
    consumo[i]= eletrodomestico[i].potencia*eletrodomestico[i].tempo_ativo;
    consumo_total = consumo_total+consumo[i];
  }

  //Consumo consumo_relativo
  for (int i = 0; i < 5; i++) {
    consumo_relativo[i] = consumo[i]/consumo_total;
  }

  for (int i = 0; i < 5; i++) {
    printf("%s\nConsumo: %f\nConsumo Relativo: %f\n\n",eletrodomestico[i].nome,consumo[i],consumo_relativo[i]);
  }

  return 0;
}
