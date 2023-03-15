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
  //para poder utilizar pontuações
  setlocale(LC_ALL, "portuguese");
  //declaração de variáveis
  Atleta atleta[5];
  int i;
  FILE *arq = fopen("atletas.bin", "wb");

  for(i = 0; i < 5; i++){
    printf("Digite o nome do %i° atleta: ", i+1);
    fgets(atleta[i].nome, 20, stdin);
    atleta[i].nome[strcspn(atleta[i].nome, "\n")] = '\0';
    fflush(stdin);
    printf("Digite o esporte que o %i° atleta pratica: ", i+1);
    fgets(atleta[i].esporte, 30, stdin);
    atleta[i].esporte[strcspn(atleta[i].esporte, "\n")] = '\0';
    fflush(stdin);
    printf("Digite a idade do %iº atleta: ", i+1);
    scanf("%i", &atleta[i].idade);
    fflush(stdin);
    printf("Digite a altura do %iº atleta: ", i+1);
    scanf("%f", &atleta[i].altura);
    fflush(stdin);
    printf("\n");
  }//for

    fwrite(atleta, sizeof(Atleta), 5, arq);

  printf("\n");

  fclose(arq);

  return 0;
}//main
