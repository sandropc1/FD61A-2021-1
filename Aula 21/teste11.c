#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


typedef struct NoAVL *PtrNoArvoreAvl;

typedef struct NoAVL {
  int termo;
  PtrNoArvoreAvl direito;
  PtrNoArvoreAvl esquerdo;
  //int fator;
  int altura;
} NoAVL;



void iniciaAVL(PtrNoArvoreAvl *arvore) {
 *arvore = NULL;
}

bool estaVaziaAVL(PtrNoArvoreAvl *arvore) {
  return((*arvore) == NULL);
}


void emOrdem(PtrNoArvoreAvl *arvore) {
  if((*arvore) == NULL) return;
  emOrdem(&(*arvore)->esquerdo);
  printf("%d ", (*arvore)->termo);
  emOrdem(&(*arvore)->direito);
}

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

bool InserirAVL(PtrNoArvoreAvl *arvore, int x) {

  if((*arvore) == NULL) {
    (*arvore) = (PtrNoArvoreAvl)malloc(sizeof(NoAVL));
    (*arvore)->direito = (*arvore)->esquerdo = NULL;
    (*arvore)->termo = x;
    (*arvore)->altura = 1;
    //(*arvore)->fator = 0;
    return true;
  }

  if((*arvore)->termo == x) return false;

  bool auxiliar;

  if(x < (*arvore)->termo) {
    auxiliar = InserirAVL(&(*arvore)->esquerdo, x);
  } else {
    auxiliar = InserirAVL(&(*arvore)->direito, x);
  }

  if(!auxiliar) return (false);

  int ae;
  int ad;
  int fb;

  ae = alturaArvoreAVL((*arvore)->esquerdo);
  ad = alturaArvoreAVL((*arvore)->direito);

  if((ad - ae) >= +2 || (ad - ae) <= -2) {
    AplicarRotacoes(&(*arvore));
  }
  (*arvore)->altura = atualizaAltura((*arvore)->esquerdo, (*arvore)->direito);

  return(true);
}

void preOrdem(PtrNoArvoreAvl *arvore) {

  if((*arvore) == NULL) return;
  printf("%d ", (*arvore)->termo);

  int ad = alturaArvoreAVL((*arvore)->direito);
  int ae = alturaArvoreAVL((*arvore)->esquerdo);

  int fb = ad- ae;
  printf("(%d)  \n",fb);
  preOrdem(&(*arvore)->esquerdo);
  preOrdem(&(*arvore)->direito);
}


int main(int argc, const char * argv[]) {

  FILE *arq = fopen("entrada1.txt","r");
  FILE *arq_saida = fopen("saida1.txt","w");

  PtrNoArvoreAvl raiz;

  iniciaAVL(&raiz);
  char linha[200];
  char* token;
  int x;


  fscanf(arq,"%s",linha);

  token = strtok(linha,",");
  x = atoi(token);
  InserirAVL(&raiz, x);

  printf("%d ",x);

    while(token != NULL){
      token = strtok (NULL,",");
        if(token == NULL){
          break;
        }
      x = atoi(token);
    InserirAVL(&raiz, x);
    printf("%d ",x);
    }

  preOrdem(&raiz);
  printf("\n");

  return 0;
}
