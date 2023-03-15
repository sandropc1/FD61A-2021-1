
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){
  //permite o uso de acentos e ç
  setlocale(LC_ALL, "portuguese");
  //declaração de variáveis
  int i, random[100];
  int lido[100];
  FILE *arq = fopen("arquivo.bin", "w+b");
  //salva os valores no vetor
  for (i = 0; i < 100; i++){
    //gera um valor aleatório entre 0 e 99 e salva no vetor
    random[i] = (rand() % 100);
  }//for
  //escreve os dados gerados no arquivo
  fwrite(random, sizeof(int), 100, arq);
  //volta para o começo do arquivo
  fseek(arq, 0, SEEK_SET);
  //lê do arquivo no HD e exibe na tela
  fread(lido, sizeof(int), 100, arq);
  for (i = 0; i < 100; i++){
    //->valor gerado para ser salvo no .bin | ->valor convertido para exibir na tela
    printf("%i | %i\n", random[i], lido[i]);
  }//for
  //fecha o arquivo
  fclose(arq);

  return 0;
}//main
