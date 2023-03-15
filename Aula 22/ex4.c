/*
Considerando a estrutura atleta do exercício anterior, escreva um programa que l
eia um arquivo binário contendo os dados de cinco atletas. Calcule e exiba o
nome do atleta mais alto e do mais velho.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

  typedef struct{
    char nome[20];
    char esporte[30];
    int idade;
    float altura;
  }Atleta;

int main(){

Atleta atleta[5];
FILE *arq = fopen("atletas.bin", "rb");

fread(atleta,sizeof(Atleta),5,arq);

int mais_velho;
int maior_idade = 0;

int mais_alto;
float maior_altura;


for (int i = 0; i < 5; i++) {
  if(atleta[i].altura >= maior_altura){

  maior_altura = atleta[i].altura;
  mais_alto = i;
}
if(atleta[i].idade > maior_idade){

  maior_idade = atleta[i].idade;
  mais_velho = i;
  }
}

printf("O atleta mais velho é: %s\n",atleta[mais_velho].nome);
printf("O atleta mais alto é: %s\n",atleta[mais_alto].nome);

fclose(arq);
  return 0;
}
