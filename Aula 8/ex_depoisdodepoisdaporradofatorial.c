/*
Faça um programa que simule um jogo, onde o usuário deverá descobrir um número
aleatório escolhido pelo computador (de 1 a 100).
O usuário poderá realizar até 6 tentativas, o programa deverá retornar as
mensagens “muito alto”, “muito baixo” até o usuário acertar o número ou esgotar
o número máximo de tentativas

Dica: Pesquise sobre como gerar um numero aleatório  utilizando a função rand
da biblioteca math.h
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

  int main(){

int aleatorio = rand();
int palpite;
int tentativas = 6;
printf("Tente adivinhar o número aleatório, você tem 6 tentativas:\n");

while(tentativas != 0){

scanf("\n %i",&palpite);

if(palpite == aleatorio){

    printf("Parabéns, você acertou!");
    return 0;

}else{
    if(palpite > aleatorio){
    printf("Muito alto.");
    tentativas--;
    printf("%i tentativas restantes.",tentativas);

  }else{
    printf("Muito baixo.");
    tentativas--;
    printf("%i tentativas restantes.\n",tentativas);
            }//else interno

        }//else externo

    }//while
printf("Você falhou em adivinhar o número aleatório");

return 0;
  }
