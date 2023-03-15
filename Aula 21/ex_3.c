/*
Escreva um programa para converter o conteúdo de um arquivo texto em caracteres
maiúsculos. O programa deverá ler do usuário o nome do arquivo a ser convertido
e o nome do arquivo a ser salvo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void tranforma_maiusculo(char arquivo1[],char arquivo2[]){

char texto;
char texto_em_maisculo;

FILE *arq1 = fopen(arquivo1,"r");
if(arq1 == NULL){
printf("Erro ao abrir o arquivo!\n");
exit(1);
}
FILE *arq2 = fopen(arquivo2,"w");
if(arq2 == NULL){
printf("Erro ao abrir o arquivo!\n");
exit(1);
}

while ((texto = fgetc(arq1)) != EOF) {
  texto_em_maisculo = toupper(texto);
  fputc(texto_em_maisculo,arq2);

   }

return;
 }

void main (){
  char arquivo1[16];
  char arquivo2[16];

printf("Digite o nome do primeiro arquivo:");
  fgets(arquivo1, 16, stdin);
  arquivo1[strcspn(arquivo1,"\n")]='\0';
  setbuf(stdin, NULL);

printf("Digite o nome do segundo arquivo:");
  fgets(arquivo2, 16, stdin);
  arquivo2[strcspn(arquivo2,"\n")]='\0';
  setbuf(stdin, NULL);

tranforma_maiusculo(arquivo1,arquivo2);

return;
 }
