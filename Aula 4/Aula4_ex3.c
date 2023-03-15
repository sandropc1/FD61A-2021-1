#include  <stdio.h>
#include <stdlib.h>

int main(){

int A = 40;
int B = -1;

int soma = A + B;
int sub = A - B;
int multi = A * B;
int divi = A / B;

printf("Com A = 40 e B = -1:\n");
printf("A+B= %i\n",soma);
printf("A-B= %i\n",sub);
printf("A*B= %i\n",multi);
printf("A/B= %i\n",divi);

B++;

int soma2 = A + B;
int sub2 = A - B;
int multi2 = A * B;

printf("Com o incremento de uma unidade em B:\n");
printf("A+B= %i\n",soma2);
printf("A-B= %i\n",sub2);
printf("A*B= %i\n",multi2);
printf("A/B= Impossivel\n");


return 0;
}
