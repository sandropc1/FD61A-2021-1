
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
setlocale(LC_ALL,"");
int vetorA [4] ;
int vetorB [5] ;

for(int i=0; i<4; i++){//Recebe os valores do vetorA
  printf("%i/4\n",i+1);
  printf("Digite os valores para o vetor A: ");
  scanf("%i", &vetorA[i]);
}//for vetorA
for(int x=0; x<5; x++){//Recebe os valores do vetorB
  printf("%i/5\n",x+1);
  printf("Digite os valores para o vetor B: ");
  scanf("%i", &vetorB[x]);
}//for vetorB
for(int y=0; y<4; y++){
  for(int z=0; z<5; z++){
    if(vetorB[z] == vetorA[y]){
      printf("O valor %i é comum aos dois vetores.\n",vetorB[z]);
    }//if
  }//for comparação
}//for aninhado

return 0;
}//main
