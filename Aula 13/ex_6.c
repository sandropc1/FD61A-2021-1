/*
Faça um programa que receba um nome e um sobrenome. Ele deve construir uma nova
string no formato americano (Sobrenome, Nome)
Exemplo: Silva, José


*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){

char nome [20];
char sobrenome [20];

  printf("Digite o nome:");
  fgets(nome, 16, stdin);
  nome[strcspn(nome,"\n")] = '\0';
  setbuf(stdin, NULL);

  printf("Digite o sobrenome:");
  fgets(sobrenome, 16, stdin);
  sobrenome[strcspn(sobrenome,"\n")] = '\0';
  setbuf(stdin, NULL);

char virgula [3] = {", "};
char americano[40] = {""};

 strcat(americano,sobrenome);
 strcat(americano,virgula);
 strcat(americano,nome);

 printf("%s\n",americano);

return 0;
}
