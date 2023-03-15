/*
screva um programa que leia do usuário o nome de um arquivo texto.
Em seguida, mostre na tela quantas linhas esse arquivo possui.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int contador(char nome[]){

char texto;
int conta_linhas = 0;

FILE *arq = fopen(nome,"r");
  if(arq == NULL){
  printf("Erro ao abrir o arquivo!\n");
  exit(1);
  }

while ((texto = fgetc(arq)) != EOF) {
   if(texto == '\n'){
     conta_linhas++;
    }
   }
fclose(arq);
  return conta_linhas + 1;
}

void main(){

char nome[16];
int resultado;

printf("Digite o nome do arquivo:");
fgets(nome, 16, stdin);
nome[strcspn(nome,"\n")]='\0';
setbuf(stdin, NULL);

resultado = contador(nome);
printf("O número de linhas do arquivo e igual a: %i\n",resultado);
  return;
}
