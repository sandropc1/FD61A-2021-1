/*
Faça um programa que some as matrizes A e B, gerando a matriz C
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int matrizA [2][3] = {{3,7,10},{1,5,0}};
int matrizB [2][3] = {{2,3,4},{6,0,2}};

int matrizC [2][3];

int l,c;


printf("Matriz C:\n");

for(l=0;l<2;l++){
  for(c=0;c<3;c++){
matrizC [l][c] = matrizA [l][c] + matrizB [l][c];
printf("%i ",matrizC[l][c]);
  }
printf("\n");
}

return 0;
}
for(l=0;l<10;l++){
  for(c=0;c<10;c++){
    printf("Digite os nomes:");
    fgets(nomes[l][c],10,stdin);
    nomes[l][c][strcspn(nomes[l][c],"\n")] = '\0';
    setbuf(stdin, NULL);

  }
}
