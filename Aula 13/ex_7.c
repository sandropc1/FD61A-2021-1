/*
Escreva um programa que receba uma sigla de um estado da região Sul ou Sudeste
e exiba o nome completo do estado correspondente.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){

char SP [20]= {"SP"};
char RJ [20]= {"RJ"};
char ES [20]= {"ES"};
char MG [20]= {"MG"};
char PR [20]= {"PR"};
char SC [20]= {"SC"};
char RS [20] = {"RS"};

char sigla [3];

printf("Insira a sigla de um estado da região Sul ou Sudeste:");
fgets(sigla, 3, stdin);
sigla[strcspn(sigla,"\n")] = '\0';
setbuf(stdin, NULL);

if(strcasecmp(sigla , SP) == 0){
  printf("São Paulo\n");
}else{
  if(strcasecmp(sigla , RJ) == 0){
  printf("Rio de Janeiro\n");
}else{
  if(strcasecmp(sigla , ES) == 0){
  printf("Espirito Santo\n");
}else{
  if(strcasecmp(sigla , MG) == 0){
  printf("Minas Gerais\n");
}else{
  if(strcasecmp(sigla , PR) == 0){
    printf("Paraná\n");
}else{
  if(strcasecmp(sigla , SC) == 0){
  printf("Santa Catarina\n");
}else{
  if(strcasecmp(sigla , RS) == 0){
    printf("Rio Grande do Sul\n");
}else{
  printf("Sigla inválida");
}
          }
        }
      }
    }
  }
}
return 0;
}
