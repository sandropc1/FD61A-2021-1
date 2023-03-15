/*
Crie um programa de cadastro que receba, armazene, e em seguida, exiba os dados
 de 5 pessoas.
Cada pessoa possui: nome, idade, peso, data de nascimento, brasileiro ou estran
geiro. Caso seja Brasileiro, armazene o CPF, caso estrangeiro, armazene o passa
porte.

Regra: Utilize structs, typedef, union e enum.

*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef enum {BRASILEIRO = 1,ESTRANGEIRO}Nacionalidade;

typedef struct {
 char nome[50];
 int idade;
 float peso;
  struct {
   int dia;
   int mes;
   int ano;
 }Nascimento;
int nacionalidade;
  union {
    char cpf[20];
    char passaporte[20];
  }identificacao;
}Pessoas;

int main(){

Pessoas pessoas[5];
for (int i = 0; i < 1; i++) {
//nome
  printf("Digite o nome da %i° pessoa:",i+1);
  fgets(pessoas[i].nome, 50, stdin);
  pessoas[i].nome[strcspn(pessoas[i].nome,"\n")] = '\0';
setbuf(stdin, NULL);
//idade
  printf("Digite a idade da %i° pessoa:",i+1);
  scanf("%i",&pessoas[i].idade);
setbuf(stdin, NULL);
//peso
  printf("Digite o peso da %i° pessoa:",i+1);
  scanf("%f",&pessoas[i].peso);
setbuf(stdin, NULL);
//data de nascimento
  printf("Digite a data de nascimento da %i° pessoa(dd/mm/aa):",i+1);
scanf("%i/%i/%i",&pessoas[i].Nascimento.dia,&pessoas[i].Nascimento.mes,&pessoas[i].Nascimento.ano);
setbuf(stdin, NULL);
//Nacionalidade
pessoas[i].nacionalidade = 0;
printf("A pessoa %i é brasileira ou estrangeira?\n",i+1);
printf("1 - Brasileira\n2 - Estrangeira\n");
    while(pessoas[i].nacionalidade < 1 || pessoas[i].nacionalidade > 2){
      scanf("%i",&pessoas[i].nacionalidade);
setbuf(stdin, NULL);
    }
switch(pessoas[i].nacionalidade){
  case BRASILEIRO:
    printf("Insira o CPF da %i° pessoa (Ex: 123.456.789-12):",i+1);
    fgets(pessoas[i].identificacao.cpf, 20, stdin);
    pessoas[i].identificacao.cpf[strcspn(pessoas[i].identificacao.cpf,"\n")] = '\0';
setbuf(stdin, NULL);
break;
  case ESTRANGEIRO:
      printf("Insira o passaporte da %i° pessoa (Ex: BR123456):",i+1);
      fgets(pessoas[i].identificacao.passaporte, 20, stdin);
      pessoas[i].identificacao.passaporte[strcspn(pessoas[i].identificacao.passaporte,"\n")] = '\0';
setbuf(stdin, NULL);
break;
    }
}//for

for (int i = 0; i < 1; i++) {

  printf("%i° pessoa:\n",i+1);
  printf("Nome: %s\n",pessoas[i].nome);
  printf("Idade: %i\n",pessoas[i].idade);
  printf("Peso: %.2f\n",pessoas[i].peso);
  printf("Data de nascimento: %i/%i/%i\n",pessoas[i].Nascimento.dia,pessoas[i].Nascimento.mes,pessoas[i].Nascimento.ano);
if(pessoas[i].nacionalidade == 1){
  printf("CPF: %s\n",pessoas[i].identificacao.cpf);
}
if(pessoas[i].nacionalidade == 2){
  printf("Passaporte: %s\n",pessoas[i].identificacao.passaporte);
}
}

return 0;
}
