/*
Fazer um programa para ler as coordenadas x e y de dois pontos
 e calcular a distância entre os dois pontos no plano
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int x1,y1,x2,y2;

printf("Digite as coordenadas de um ponto(x,y):");
scanf("(%d,%d)",&x1,&y1);
setbuf(stdin,NULL);
printf("Digite as coordenadas de outro ponto(x,y):");
scanf("(%d,%d)",&x2,&y2);

int sub1,sub2;

sub1 = x2 - x1;
sub1 = pow(sub1,2);

sub2 = y2 - y1;
sub2 = pow(sub2,2);

float valor_final = sub1 + sub2;
valor_final = sqrt(valor_final);

printf("A distancia entre os dois pontos é aproximadamente: %.2f\n",valor_final);

return 0;
}
