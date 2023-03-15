/*
Considerando a estrutura ranking do exercício anterior, escreva um programa que
leia o arquivo gerado contendo os dados dos 5 jogadores
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
FILE *arq = fopen("ranking.bin", "rb");

for (size_t i = 0; i < 5; i++) {

  fscanf(arq,"%s\n",jogadores[i].nome);
  fscanf(arq,"%d\n",&jogadores[i].pontuacao);

}

fclose(arq);
return 0;
}
