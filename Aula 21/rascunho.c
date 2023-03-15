#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


typedef struct NoAVL *PtrNoArvoreAvl;

typedef struct NoAVL {
  int termo;
  PtrNoArvoreAvl direito;
  PtrNoArvoreAvl esquerdo;
  int altura;
  int level;
} NoAVL;


void iniciaAVL(PtrNoArvoreAvl *arvore) {
 *arvore = NULL;
}

bool estaVaziaAVL(PtrNoArvoreAvl *arvore) {
  return((*arvore) == NULL);
}
/*
int levelArvoreAVL(PtrNoArvoreAvl *arvore) {

  (*arvore)->esquerdo->level = (*arvore)->level + 1;
  (*arvore)->direito->level = (*arvore)->level + 1;

   levelArvoreAVL(&(*arvore)->esquerdo);
   levelArvoreAVL(&(*arvore)->direito);
}
*/

//------------------Funções relacionadas a altura----------------------------------
int alturaArvoreAVL(PtrNoArvoreAvl arvore) {
  if(arvore == NULL) {
    return (0);
  } else {
    return ((arvore)->altura);
  }
}

int atualizaAltura(PtrNoArvoreAvl esquerdo, PtrNoArvoreAvl direito) {

  int ae = alturaArvoreAVL(esquerdo);
  int ad = alturaArvoreAVL(direito);

  if(ae > ad) {
    return(ae + 1);
  } else {
    return(ad + 1);
  }
}

//------------------Funções relacionadas a rotações----------------------------------

void rotacaoSimplesdireito(PtrNoArvoreAvl *arvore) {

  PtrNoArvoreAvl u = (*arvore)->esquerdo;
  (*arvore)->esquerdo = u->direito;
  u->direito = (*arvore);

  //atualizar a altura dos nós modificados (arvore, u)
  (*arvore)->altura = atualizaAltura((*arvore)->esquerdo, (*arvore)->direito);
  u->altura = atualizaAltura(u->esquerdo, u->direito);

  (*arvore) = u;
}

void rotacaoSimplesesquerdo (PtrNoArvoreAvl *arvore) {

  PtrNoArvoreAvl u = (*arvore)->direito;
  (*arvore)->direito = u->esquerdo;
  u->esquerdo = (*arvore);

  (*arvore)->altura = atualizaAltura((*arvore)->esquerdo, (*arvore)->direito);
  u->altura = atualizaAltura(u->esquerdo, u->direito);

  (*arvore) = u;
}

void rotacaoDuplaesquerdo (PtrNoArvoreAvl *arvore) {

  PtrNoArvoreAvl u, v;
  u = (*arvore)->direito;
  v = u->esquerdo;

  (*arvore)->direito = v->esquerdo;
  u->esquerdo = v->direito;
  v->esquerdo = (*arvore);
  v->direito = u;

  //atualizar a altura dos nós modificados (arvore, u, v)
  (*arvore)->altura = atualizaAltura((*arvore)->esquerdo, (*arvore)->direito);
  u->altura = atualizaAltura(u->esquerdo, u->direito);
  v->altura = atualizaAltura(v->esquerdo, v->direito);

  //autualizacao da referencia do arvore
  (*arvore) = v;
}

void rotacaoDupladireito (PtrNoArvoreAvl *arvore) {

  PtrNoArvoreAvl u, v;
  u = (*arvore)->esquerdo;
  v = u->direito;

  (*arvore)->esquerdo = v->direito;
  u->direito = v->esquerdo;

  v->direito = (*arvore);
  v->esquerdo = u;

  //atualizar a altura dos nós modificados (arvore, u, v)
  (*arvore)->altura = atualizaAltura((*arvore)->esquerdo, (*arvore)->direito);
  u->altura = atualizaAltura(u->esquerdo, u->direito);
  v->altura = atualizaAltura(v->esquerdo, v->direito);

  (*arvore) = v;
}

void AplicarRotacoes(PtrNoArvoreAvl *arvore) {

  int ad = alturaArvoreAVL((*arvore)->direito);
  int ae = alturaArvoreAVL((*arvore)->esquerdo);
  int fb;

  // Verificar se é rotacao para direito
  if(ae > ad) {
    PtrNoArvoreAvl temp = (*arvore)->esquerdo;
    int temp_ad = alturaArvoreAVL(temp->direito);
    int temp_ae = alturaArvoreAVL(temp->esquerdo);
    // temp_ae > ou >= temp_ad
  if(temp_ae > temp_ad) {
      rotacaoSimplesdireito(&(*arvore));
    } else {
      rotacaoDupladireito(&(*arvore));
    }
  }
  // Senao é rotacao para esquerdo
  else { //(ad > ae)
    PtrNoArvoreAvl tmp2 = (*arvore)->direito;
    int tmp2_ad = alturaArvoreAVL(tmp2->direito);
    int tmp2_ae = alturaArvoreAVL(tmp2->esquerdo);

    if(tmp2_ad > tmp2_ae){
      rotacaoSimplesesquerdo(&(*arvore));
    } else {
      rotacaoDuplaesquerdo(&(*arvore));
    }
  }

}

//-----------------------------------------------------

bool InserirAVL(PtrNoArvoreAvl *arvore, int x) {

  if((*arvore) == NULL) {
    (*arvore) = (PtrNoArvoreAvl)malloc(sizeof(NoAVL));
    (*arvore)->direito = (*arvore)->esquerdo = NULL;
    (*arvore)->termo = x;
    (*arvore)->altura = 1;

    return true;
  }

  if((*arvore)->termo == x){
   return false;
}

  bool auxiliar;

  if(x < (*arvore)->termo) {
    auxiliar = InserirAVL(&(*arvore)->esquerdo, x);
  } else {
    auxiliar = InserirAVL(&(*arvore)->direito, x);
  }

  if(!auxiliar){
  return (false);
}

  int ae;
  int ad;

  ae = alturaArvoreAVL((*arvore)->esquerdo);
  ad = alturaArvoreAVL((*arvore)->direito);

  if((ad - ae) >= +2 || (ad - ae) <= -2) {
    AplicarRotacoes(&(*arvore));
  }
  (*arvore)->altura = atualizaAltura((*arvore)->esquerdo, (*arvore)->direito);

  return(true);
}

void preOrdem(PtrNoArvoreAvl *arvore,int altura) {

  if((*arvore) == NULL) return;

  int ad = alturaArvoreAVL((*arvore)->direito);
  int ae = alturaArvoreAVL((*arvore)->esquerdo);

  int fb = ad - ae;

if((*arvore)->level == altura){
    printf("%d (%d),", (*arvore)->termo,fb);
}
  preOrdem(&(*arvore)->esquerdo,altura);
  preOrdem(&(*arvore)->direito,altura);
}

//----------------------funções de remoção-----------------------------------
//Encontra o minmo da subarvore direito
PtrNoArvoreAvl MinSd(PtrNoArvoreAvl *arvore) {
  PtrNoArvoreAvl aux;
  if((*arvore)->esquerdo == NULL) {
    aux = (*arvore);
    (*arvore) = (*arvore)->direito; //
    return(aux);
  }
  return(MinSd(&(*arvore)->esquerdo));
}

//Encontra o minmo da subarvore esquerdo
PtrNoArvoreAvl MaxSe(PtrNoArvoreAvl *arvore) {
  PtrNoArvoreAvl aux;
  if((*arvore)->direito == NULL) {
    aux = (*arvore);
    (*arvore) = (*arvore)->esquerdo; //
    return(aux);
  }
  return(MaxSe(&(*arvore)->direito));
}

//removedor pro caso de escolha d
bool RemoverAVLd(PtrNoArvoreAvl *arvore, int x) {

  bool test;
  int ae, ad;

  if((*arvore) == NULL) {
    printf("Não existe o elemento %d para ser removido!\n", x);
    return (false);
  }

  // encontrei o que remover ...
  if((*arvore)->termo == x) {

    PtrNoArvoreAvl aux = (*arvore);
    // case 1: sub-arvore esquerdo é nula (cai aqui se for folha também)
    if((*arvore)->esquerdo == NULL) {
      (*arvore) = (*arvore)->direito;
    }
    // case 2: sub-arvore direito é nula (poderia cair aqui tb no caso de folha)
    else if((*arvore)->direito == NULL) {
      (*arvore) = (*arvore)->esquerdo;
    } else {
      // case 3: ambas subarvores existem: pegar o menor elemento da subarvore da direito
      aux = MinSd(&(*arvore)->direito);
//    aux = getMinAux(&(*arvore)->direito);
      (*arvore)->termo = aux->termo;
    }
    free(aux);
    return true;
  }

  if((*arvore)->termo > x){
    test = RemoverAVLd(&(*arvore)->esquerdo, x);
  } else {
    test = RemoverAVLd(&(*arvore)->direito, x);
  }

  if(test == false) return (false);
  else {
   ae  = alturaArvoreAVL((*arvore)->esquerdo);
   ad = alturaArvoreAVL((*arvore)->direito);

    if( ad - ae == -2 || ad - ae == 2  )
      AplicarRotacoes(&(*arvore));

    (*arvore)->altura = atualizaAltura((*arvore)->esquerdo, (*arvore)->direito);
    return(true);
  }
}

//removedor pro caso de escolha e
bool RemoverAVLe(PtrNoArvoreAvl *arvore, int x) {

  bool test;
  int ae, ad;

  if((*arvore) == NULL) {
    printf("Não existe o elemento %d para ser removido!\n", x);
    return (false);
  }

  if((*arvore)->termo == x) {
    PtrNoArvoreAvl aux = (*arvore);

    if((*arvore)->esquerdo == NULL) {
      (*arvore) = (*arvore)->direito;
    }
    else if((*arvore)->direito == NULL) {
      (*arvore) = (*arvore)->esquerdo;
    } else {
      aux = MaxSe(&(*arvore)->esquerdo);

      (*arvore)->termo = aux->termo;
    }
    free(aux);
    return true;
  }

  if((*arvore)->termo > x){
    test = RemoverAVLe(&(*arvore)->esquerdo, x);
  } else {
    test = RemoverAVLe(&(*arvore)->direito, x);
  }

  if(test == false) return (false);
  else {
   ae  = alturaArvoreAVL((*arvore)->esquerdo);
   ad = alturaArvoreAVL((*arvore)->direito);

    if( ad - ae == -2 || ad - ae == 2  )
      AplicarRotacoes(&(*arvore));

    (*arvore)->altura = atualizaAltura((*arvore)->esquerdo, (*arvore)->direito);
    return(true);
  }
}

//----------------------------------------------
void niveis(PtrNoArvoreAvl *arvore){
  if((*arvore) == NULL){
    return;
  }
  if((*arvore)->esquerdo != NULL){
    (*arvore)->esquerdo->level = (*arvore)->level+1;
  }
  if((*arvore)->direito != NULL){
    (*arvore)->direito->level = (*arvore)->level+1;
  }
 niveis(&(*arvore)->esquerdo);
 niveis(&(*arvore)->direito);
  return;
}


int main(int argc, const char * argv[]) {

  FILE *arq = fopen("entrada4.txt","r");
  FILE *arq_saida = fopen("saida.txt","w");

  PtrNoArvoreAvl raiz;
  iniciaAVL(&raiz);


  char linha[270];
  char* token;
  int x;

//---------------LE A PRIMEIRA LINHA ---------------------------

  fscanf(arq,"%s",linha);


  token = strtok(linha,",");
  x = atoi(token);
  InserirAVL(&raiz, x);

    while(token != NULL){
      token = strtok (NULL,",");

        if(token == NULL){
          break;
        }
      x = atoi(token);
    InserirAVL(&raiz, x);
  }

printf("Antes:\n");

int altura = alturaArvoreAVL(raiz);

raiz->level = 1;
niveis(&raiz);

for (int i = raiz->level; i <= altura; i++) {
  preOrdem(&raiz,i);
  printf("\n");
}
//---------------FIM DA LEITURA DA PRIMEIRA LINHA ---------------------------

//---------------LE A SEGUNDA E COLETA A ESCOLHDA DA TERCEIRA---------------
char escolha[10];

fscanf(arq,"%s",linha);

fscanf(arq,"%s",escolha);

token = strtok(linha,",");
x = atoi(token);

if(escolha[0] == 'e'){
  RemoverAVLe(&raiz,x);
}else{
RemoverAVLd(&raiz,x);
}

  while(token != NULL){
    token = strtok (NULL,",");
      if(token == NULL){
        break;
      }
    x = atoi(token);
    if(escolha[0] == 'e'){
      RemoverAVLe(&raiz,x);
    }else{
  RemoverAVLd(&raiz,x);
  }
}
printf("\n");
printf("Depois:\n");


int altura2 = alturaArvoreAVL(raiz);

raiz->level = 1;
niveis(&raiz);

for (int i = raiz->level; i <= altura2; i++) {
  preOrdem(&raiz,i);
  printf("\n");
}

  return 0;
}
