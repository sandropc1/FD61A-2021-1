/*
Faça um programa que receba um nome, ele deve perguntar novamente caso o nome
tenha tamanho inferior a 5 caracteres. Ao receber um nome com 5 caracteres ou
mais o programa exibe o nome e finaliza.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){

char nomes [100][16];
int l = 0;

for(l=0;l<2000000000;l++){

    printf("Digite um nome:");
    fgets(nomes[l], 16, stdin);
    nomes[l][strcspn(nomes[l],"\n")] = '\0';
    setbuf(stdin, NULL);
    int tamanho = strlen(nomes[l]);
if(tamanho >= 5){
  printf("Nome: %s\n",nomes[l]);
  break;
}else{
  printf("Nome inválido.\n");
}
}

return 0;
}
