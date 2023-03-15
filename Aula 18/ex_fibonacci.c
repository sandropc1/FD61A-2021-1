#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void calculaFibonnaci();
int fibonnaci();

int vetor[1000];

void calculaFibonnaci(int i) {

if(i==1 || i==2) {
  vetor[i] = 1;
  }
  else{
  vetor[i] = fibonnaci(i-1) + fibonnaci(i-2);
  }
}

int fibonnaci(int i){

if(vetor[i]==0) {
  calculaFibonnaci(i);
  printf("%d ", vetor[i]);

}else {
return vetor[i];
  }
}

int main(){

int i, N;
int *vetor;

printf("Quantos termos da série de fibonacci devem ser exibidas:");
scanf("%i",&N);

for(i=1; i<=N; i++)
fibonnaci(i);

return 0;
}
