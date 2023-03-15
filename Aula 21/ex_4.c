#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int contador_palavras(char nome[]){

char texto[16];
int conta_palavras = 0;

FILE *arq = fopen(nome,"r");
  if(arq == NULL){
  printf("Erro ao abrir o arquivo!\n");
  exit(1);
  }

while (fgets(texto,16,arq) != NULL) {
  for (size_t i = 0; i < 16; i++) {
    if(texto[i-1] == ' ' && texto[i] != ' '){
      conta_palavras++;
     }
  }
}
fclose(arq);
  return conta_palavras;
}

void main(){

char nome[16];
int resultado;

printf("Digite o nome do arquivo:");
fgets(nome, 16, stdin);
nome[strcspn(nome,"\n")]='\0';
setbuf(stdin, NULL);

resultado = contador_palavras(nome);
printf("O número de palavras no arquivo e igual a: %i\n",resultado);

  return;
}
