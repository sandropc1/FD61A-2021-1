#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct NoDeLista *PtrNoDeLista;

typedef struct NoDeLista {
    int x;
    PtrNoDeLista proximo;
    PtrNoDeLista anterior;
} NoDeLista;//estrutura do no de lista

typedef struct {
    PtrNoDeLista primeiro;
    int tamanho;
} ListaDupla;//estrutura da lista

void inicializalista(ListaDupla *lista) {
  lista->primeiro = NULL;
  lista->tamanho = 0;
}

bool estaVazia(ListaDupla *lista) {
  return (lista->primeiro == NULL);
}

bool inserir(ListaDupla *lista, int x) {

PtrNoDeLista novo = (PtrNoDeLista) malloc(sizeof(NoDeLista));

  novo->x = x;

  if(estaVazia(lista) == true){
    novo->proximo = NULL;
    novo->anterior = NULL;
    lista->primeiro = novo;

  }else{
   if(x < lista->primeiro->x) {

    novo->anterior = NULL;
    lista->primeiro->anterior = novo;
    novo->proximo = lista->primeiro;
    lista->primeiro = novo;

  }else{
    PtrNoDeLista aux;

    aux = lista->primeiro;

    while(aux->proximo != NULL && x > aux->proximo->x){
      aux = aux->proximo;
    }


    novo->proximo = aux->proximo;
    if(aux->proximo != NULL) {
      aux->proximo->anterior = novo;
    }
    novo->anterior = aux;
    aux->proximo = novo;
  }

  lista->tamanho++;
  return(true);
  }
}

void imprime(ListaDupla *lista) {
  PtrNoDeLista ptr;

  if(estaVazia(lista)) {
  printf("A lista está vazia.");

}
printf("Lista:{");
  for(ptr = lista->primeiro; ptr != NULL; ptr = ptr->proximo) {//percorre a lista e imprime o conteudo
    printf("%d ", ptr->x);
  }
  printf("}");
}

bool procurarLista(ListaDupla *lista, int x) {

  if(estaVazia(lista)){
    return false;
  }
  PtrNoDeLista ptr;
  for(ptr = lista->primeiro; ptr != NULL; ptr = ptr->proximo){
    if(ptr->x == x){
      return true;
    }
  }
  return false;
}

void destruidordeListas(ListaDupla *lista) {
  PtrNoDeLista aux;
  while((lista->primeiro)!= NULL){
    aux = lista->primeiro;
    lista->primeiro = lista->primeiro->proximo;
    lista->tamanho--;
    free(aux);
  }
}

ListaDupla* uniao(ListaDupla* lista1, ListaDupla* lista2){

PtrNoDeLista ptr;

  for(ptr = lista1->primeiro; ptr != NULL; ptr = ptr->proximo){//percorre a lista
    if(!procurarLista(lista2, ptr->x)){
    inserir(lista2,ptr->x);
  }
}
return(lista2);
}

void main(){

  ListaDupla lista;
  ListaDupla lista2;

  ListaDupla *listaunida;

  inicializalista(&lista);
  inicializalista(&lista2);

  inserir(&lista,1);
  inserir(&lista2,2);
  inserir(&lista2,3);
  inserir(&lista,5);
  inserir(&lista,5);
  inserir(&lista2,6);

listaunida = uniao(&lista,&lista2);

imprime(listaunida);
destruidordeListas(listaunida);

return;
}
