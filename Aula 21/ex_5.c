#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>



int main(){

  FILE *arq;

  char letras[400], arquivo[20];
  int conta_letra = 0, j, contador2 = 1;
  char recebe_letra_minuscula;

  printf("Digite o nome de um arquivo de texto: ");
  fgets(arquivo, 20, stdin);

  arquivo[strcspn(arquivo,"\n")] = '\0';

  setbuf(stdin, NULL);
  arq = fopen(arquivo, "r");

  while(fgets(letras, 400, arq)){
    printf("A %iª linha contém: \n", contador2);
for(recebe_letra_minuscula = 'A'; recebe_letra_minuscula <= 'Z'; recebe_letra_minuscula++){
  for(j = 0; letras[j] != '\0'; j++){
      if(letras[j] == recebe_letra_minuscula || letras[j] == tolower(recebe_letra_minuscula)){
      conta_letra++;
    }
  }
    if(conta_letra != 0){
      printf("A letra %c apareceu %d vezes\n", recebe_letra_minuscula, conta_letra);
      }
conta_letra = 0;
    }
    printf("\n");
contador2++;
  }
  printf("\n");
  return 0;
}
