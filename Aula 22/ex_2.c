#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(){

  int i, random[100], soma = 0;
  FILE *arq = fopen("arquivo.bin", "rb");

  for (i = 0; i < 100; i++){
    fscanf(arq, "%i\n", &random[i]);
    soma = soma + random[i];
  }//for
  printf("%i\n", soma);
  fclose(arq);

  return 0;
}//main
