/*
Elabora uma função que receba duas strings como parâmetros e verifique se a
segunda string está dentro da primeira. Para isso, utilize apenas aritmética
de ponteiros.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void funcao(char string1[], char string2[]){

if(strstr(string1, string2)!=0){
  printf("A segunda string está contida na primeira");
}else{
  printf("A segunda string não está contida na primeira");
}

return ;
}

int main(){

char string1[16];
char string2[16];

printf("Digite a primeira string:");
fgets(string1, 21, stdin);
string1[strcspn(string1,"\n")]='\0';
 setbuf(stdin, NULL);

printf("Digite a segunda string:");
 fgets(string2, 16, stdin);
 string2[strcspn(string2,"\n")]='\0';
 setbuf(stdin, NULL);

funcao(string1,string2);
return 0;

}//main
