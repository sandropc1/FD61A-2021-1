/*
Elabore um programa no qual o usuário informe o nome de um arquivo texto e uma
palavra, e o programa informe o número de vezes que aquela palavra aparece
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int contador_palavras(char nome[],char palavra[]){

char texto[100];
int conta_palavras = 0;

FILE *arq = fopen(nome,"r");
  if(arq == NULL){
  printf("Erro ao abrir o arquivo!\n");
  exit(1);
  }

while (fgets(texto,100,arq) != NULL) {
  for (size_t i = 0; i < 100; i++) {
    texto[i] = toupper(texto[i]);
  }
  char *p = texto;
  while ((p = (strstr(p,palavra))) != NULL){
    conta_palavras++;
    ++p;
  }

fclose(arq);
  return conta_palavras;
  }
}

void main(){

char nome[16];
char palavra[16];
int resultado;

printf("Digite o nome do arquivo:");
fgets(nome, 16, stdin);
nome[strcspn(nome,"\n")]='\0';
setbuf(stdin, NULL);

printf("Digite a palavra a ser procurada:");
fgets(palavra, 16, stdin);
palavra[strcspn(palavra,"\n")]='\0';
setbuf(stdin, NULL);

for (size_t i = 0; i < 16; i++) {
  palavra[i] = toupper(palavra[i]);
}

resultado = contador_palavras(nome,palavra);
printf("O número de palavras no arquivo e igual a: %i\n",resultado);
  return;
}
