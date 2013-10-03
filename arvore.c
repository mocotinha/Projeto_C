#include<stdio.h>
#include "arvore.h"
#define ERRO 0
#define OK 1


noarv* inicializa(void) {
       return NULL;
}

int vazia(arvore arv) {
    return (arv == NULL);
}

noarv* aloca(void) {
       return ( (noarv*) malloc(sizeof(noarv)));
}

int cleft(noarv* arv, int info){
    noarv *novo;
    if (arv == NULL)
       return ERRO;
    else if (arv->esq != NULL)
       return ERRO;
    else {
         novo = croot(info);
         novo->ant = arv;
         arv->esq = novo;
    }
    return OK;
}

int cright(noarv* arv, int info){
    noarv *novo;
    if (arv == NULL)
         return ERRO;
    else if (arv->dir != NULL)
         return ERRO;
    else {
         novo = croot(info);
         novo->ant = arv;
         arv->dir = novo;
    }
    return OK;
}

noarv* goright(arvore arv) {
       
       if (vazia(arv))
           return NULL;
       if (arv->dir == NULL)
          return NULL;
       else
           return ( arv->dir );
}

noarv* goleft(arvore arv){
       if (vazia(arv))
          return NULL;
       if (arv->esq == NULL)
          return NULL;
       else 
          return ( arv->esq );
}

int search( arvore arv, int info ) {
    if (vazia(arv))
       return ERRO;
    if ( info == arv->dado)
       return OK;
    else if (search(arv->esq, info))
        return OK;
    else
        return search(arv->dir, info);
}

void preordem(arvore arv) {
     if (!vazia(arv)) {
        printf("%d ", arv->dado); 
        preordem(arv->esq);
        preordem(arv->dir);
     }
    
}

void inordem(arvore arv) {
     
     if (!vazia(arv)) {
        inordem(arv->esq);
        printf("%d ", arv->dado); 
        inordem(arv->dir);
     }
    
}

void posordem(arvore arv) {
     if (!vazia(arv)) {
        posordem(arv->esq);
        posordem(arv->dir);
        printf("%d ", arv->dado);
     }  
}

int help(){
    printf("\n------ Help ------\n");
    printf("croot        Cria raiz da arvore\n"); 
    printf("cleft        Cria filho esquerdo\n"); 
    printf("cright       Cria filho direito\n"); 
    printf("goleft       Caminha para o filho esquerdo\n"); 
    printf("goright      Caminha para o filho direito\n"); 
    printf("back         Volta para o no ancestral\n"); 
    printf("goroot       Volta para a raiz da arvore\n"); 
    printf("search       Pesquisa pela existencia de um no\n"); 
    printf("tree         Exibe a sequencia de elementos da arvore\n"); 
    printf("             em pre-ordem, pos-ordem ou in-ordem\n"); 
    printf("deltree      Remove todos os nos da arvore ou uma sub-arvore de um no\n"); 
    printf("height       Exibe a altura relativa da arvore\n"); 
    printf("size         Exibe a quantidade de nos da arvore\n"); 
    printf("cnextleft    Criar proximo filho disponivel a esquerda\n"); 
    printf("cnextright   Criar proximo filho disponivel a direita\n"); 
    printf("leafs        Exibe a quantidade de nos folhas\n"); 
    printf("quit         Sair do interpretador de comandos\n"); 
    printf("help         Exibe a lista de todos os comandos disponivel\n"); 
    printf("whereami     Exibe o local (conteudo) onde se encontra o no relativo\n\n");
    return 0;   
}



noarv* croot(int info){
       noarv *novo;
       if ((novo = aloca()) == NULL)
          return NULL;
       novo->dado = info;
       novo->esq = NULL;
       novo->dir = NULL;
       novo->ant = NULL;
       return(novo);
}

noarv* cnextleft(noarv* arv){
    if(arv->esq == NULL){
        return arv;
    }
    return cnextleft(arv->esq);
}

noarv* cnextright(noarv* arv){   
    if(arv->dir == NULL){
        return arv;
    }
    return cnextright(arv->dir);
}

int quit(){
    char c;
    printf("Deseja realmente sair? S/N\n");
    c = getche();
    if (c == 's' || c == 'S'){
          return 1;
    }else if (c == 'n' || c=='N'){
          return 0;
    }else{
          printf(" e um comando invalido.\n");
          printf("Erro na execusao do comando quit.");
    }
    
}
int whereami(noarv* arv){
    if(arv == NULL)
           return ERRO;
    return arv->dado;
}

int ajusteAncestral(noarv* ancestral,noarv *aux){
    if(aux->ant == NULL)
        ancestral = NULL;
    else if(aux->dado == ancestral->dir->dado)
        ancestral->dir = NULL;
    else
        ancestral->esq = NULL;
    return 0;   
}

noarv* back(noarv* aux){
      return aux->ant;      
}

int leafs(noarv* arv){
   if(arv == NULL)
        return 0;
   if(arv->esq == NULL && arv->dir == NULL)
        return 1;
   return leafs(arv->esq) + leafs(arv->dir);
}

int maior(int a, int b){
    if(a > b)
        return a;
    else
        return b;
}

int height(noarv* arv){
   if((arv == NULL) || (arv->esq == NULL && arv->dir == NULL))
       return 0;
   else
       return 1 + maior(height(arv->esq), height(arv->dir));
}

int deltree(noarv* arv){
   if (!vazia(arv)) {
        deltree(arv->esq); 
        deltree(arv->dir);
        free(arv);
   }
   return 0;
}

int contarNos(noarv* arv){
   if(arv == NULL)
        return 0;
   else
        return 1 + contarNos(arv->esq) + contarNos(arv->dir);
}




