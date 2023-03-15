/*
Crie uma estrutura representando um ranking. Essa estrutura deve conter o nome
do jogador e sua pontuação. Em seguida, escreva um programa que leia os dados de
5 jogadores e os armazene em um arquivo utilizando a técnica de Dados formatados.

*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

  typedef struct{
    char nome[20];
    int pontuacao;
  }Jogador;

int main(){

Jogador jogadores[5];
FILE *arq = fopen("ranking.bin", "wb");

for (size_t i = 0; i < 5; i++) {
  printf("Digite o nome do %i° jogador:",i+1);
  fgets(jogadores[i].nome, 20, stdin);
  jogadores[i].nome[strcspn(jogadores[i].nome, "\n")] = '\0';
  fflush(stdin);

  printf("Digite a pontuação do %i° jogador:",i+1);
  scanf("%i",&jogadores[i].pontuacao);
fflush(stdin);

  fprintf(arq,"%s\n",jogadores[i].nome);
  fprintf(arq,"%i\n",jogadores[i].pontuacao);
}

fclose(arq);

return 0;
}
