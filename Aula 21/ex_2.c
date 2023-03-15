/*
Escreva um programa que leia do usuário os nomes de dois arquivos texto.
Crie um terceiro arquivo texto com o conteúdo dos dois primeiros juntos
(o conteúdo do primeiro seguido do conteúdo do segundo)
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


void concatenar_arquivos(char arquivo1[],char arquivo2[]){

char texto;

FILE *arq1 = fopen(arquivo1,"r");
if(arq1 == NULL){
printf("Erro ao abrir o arquivo!\n");
exit(1);
}
FILE *arq2 = fopen(arquivo2,"r");
if(arq2 == NULL){
printf("Erro ao abrir o arquivo!\n");
exit(1);
}
FILE *arq3 = fopen("resultado.txt","w");
if(arq3 == NULL){
printf("Erro ao abrir o arquivo!\n");
exit(1);
}

while ((texto = fgetc(arq1)) != EOF) {
   fputc(texto,arq3);
   }

while ((texto = fgetc(arq2)) != EOF) {
  fputc(texto,arq3);
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

  concatenar_arquivos(arquivo1,arquivo2);

return;
 }
