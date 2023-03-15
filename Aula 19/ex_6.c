/*
6) Considere a seguinte declaração:
 int a, *b, **c, ***d;
 Escreva um programa que receba o valor de a, calcule e exiba:
 O dobro do valor a, utilizando o ponteiro b
 O triplo do valor a, utilizando o ponteiro c
 O quadruplo do valor a, utilizando o ponteiro d
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

int a, *b, **c, ***d;

printf("Digite o valor de a:");
scanf("%i",&a);

b = &a;
c = &b;
d = &c;

printf("%d\n",*b * 2);
printf("%d\n",**c * 3);
printf("%d\n",***d * 4);


return 0;
}
