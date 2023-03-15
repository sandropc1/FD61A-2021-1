/*
Faça um programa que receba uma frase e depois exiba quantas vezes cada vogal
aparece. Ele deve contar considerando o tamanho da String.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){

char frase [81];
int i;

printf("Digite a frase:");
fgets(frase, 81, stdin);
frase[strcspn(frase,"\n")] = '\0';
setbuf(stdin, NULL);

int vogais[5] = {0,0,0,0,0};

int tamanho = strlen(frase);

for(i=0;i<tamanho;i++){
if(frase[i] == 'a' || frase[i] == 'A'){
vogais[0]++;
}
if(frase[i] == 'e' || frase[i] == 'E'){
vogais[1]++;
}
if(frase[i] == 'i' || frase[i] == 'I'){
vogais[2]++;
}
if(frase[i] == 'o' || frase[i] == 'O'){
vogais[3]++;
}
if(frase[i] == 'u' || frase[i] == 'U'){
vogais[4]++;
}
}
printf("%i letras 'a'\n",vogais[0]);
printf("%i letras 'e'\n",vogais[1]);
printf("%i letras 'i'\n",vogais[2]);
printf("%i letras 'o'\n",vogais[3]);
printf("%i letras 'u'\n",vogais[4]);

return 0;
}
