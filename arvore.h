typedef struct stnoarvore {
    int dado;
    struct stnoarvore *esq;
    struct stnoarvore *dir;
    struct stnoarvore *ant;
}noarv;

typedef noarv* arvore;

noarv* cnextleft(noarv* arv);

noarv* cnextright(noarv* arv);
noarv* croot(int info);
int help();
noarv* inicializa(void);
int vazia(arvore arv);
int cleft(noarv* arv, int info);
noarv* aloca(void);
int cright(noarv* arv, int info);
int whereami(noarv* arv);
noarv* goright(arvore arv);
noarv* goleft(arvore arv);
int search( arvore arv, int info );
void preordem(arvore arv);
void posordem(arvore arv);
void inordem(arvore arv);
int deltree(noarv* arv);
int ajusteAncestral(noarv* ancestral,noarv* aux);
noarv* back(noarv* aux);
int leafs(noarv* arv);
int height(noarv* arv);
int contarNos(noarv* arv);
