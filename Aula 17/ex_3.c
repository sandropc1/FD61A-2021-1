#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct{
  char nome[31];
  char estilo[21];
  int integrantes;
  int posicao_top5;
}Bandas;

void preencher(Bandas bandas[5]){//FUNÇÃO DE preencher

for (int i = 0; i < 2; i++) {

printf("Digite o nome da %i° banda:",i+1);
fgets(bandas[i].nome, 31, stdin);
bandas[i].nome[strcspn(bandas[i].nome,"\n")]='\0';
setbuf(stdin, NULL);

printf("Digite o estilo musical da %i° banda:",i+1);
fgets(bandas[i].estilo, 21, stdin);
bandas[i].estilo[strcspn(bandas[i].estilo,"\n")]='\0';
setbuf(stdin, NULL);

printf("Digite o número de integrantes da %i° banda:",i+1);
scanf("%i",&bandas[i].integrantes );
setbuf(stdin, NULL);

printf("Em que posição do ranking essa banda está dentre as suas 5 bandas favoritas?");
scanf("%i",&bandas[i].posicao_top5);
setbuf(stdin, NULL);
  }//for
return;
}//função preencher

void posicao_rank(Bandas bandas[5]){//função da C
int numero;

do {
  printf("Qual a posição da banda na lista?");
  scanf("%i",&numero);
} while(numero < 1 || numero > 5);

for (int i = 0; i < 5; i++) {

  if(numero == bandas[i].posicao_top5){
      printf("\nBanda de posição: #%i\n",i+1);
      printf("Nome: %s\n",bandas[i].nome);
      printf("Estilo musical: %s\n",bandas[i].estilo);
      printf("Número de integrantes: %i\n",bandas[i].integrantes);
  }
}
return;
}

void estilos(Bandas bandas[5]){//função da D

char estilo[21];

  printf("Insira um estilo musical:");
  fgets(estilo, 21, stdin);
  estilo[strcspn(estilo,"\n")]='\0';
  setbuf(stdin, NULL);

for (int i = 0; i < 5; i++) {

  if(strcasecmp(estilo,bandas[i].estilo) == 0){
    printf("\nBanda de posição: #%i\n",i+1);
    printf("Nome: %s\n",bandas[i].nome);
    printf("Estilo musical: %s\n",bandas[i].estilo);
    printf("Número de integrantes: %i\n",bandas[i].integrantes);
    }
  }//for
}//fim da função D

void nome(Bandas bandas[5]){//função da E

char nome[21];
int k = 0;

  printf("Insira o nome de uma banda:");
  fgets(nome, 21, stdin);
  nome[strcspn(nome ,"\n")]='\0';
  setbuf(stdin, NULL);

  for (int i = 0; i < 5; i++) {

    if(strcasecmp(nome,bandas[i].nome) == 0){
      printf("A banda '%s' está entre as suas bandas favoritas.\n",nome);
      k++;
    }

    }//for
  if(k == 0){
      printf("A banda '%s' não está entre as suas bandas favoritas.\n",nome);
    }
    return;
  }//fim da função E


int main(){

int escolha = 0;
while (escolha != 5) {

printf("\nGerenciamento de bandas:\n");
printf("1- Definir lista de bandas.\n2- Informações sobre uma banda da lista\n");
printf("3- Separa as bandas por estilo musical\n4- Verifica se uma banda está na lista\n5- Sair do programa.\n");
printf("Escolha:");
scanf("%i",&escolha);
setbuf(stdin, NULL);

Bandas cinco_bandas[5];

switch (escolha) {
  case 1:
  preencher(cinco_bandas);
break;
  case 2:
  posicao_rank(cinco_bandas);
break;
  case 3:
  estilos(cinco_bandas);
break;
  case 4:
  nome(cinco_bandas);
break;
  case 5:
  printf("Saindo do programa.");
break;

  }//switch
}//while

return 0;
}
