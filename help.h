int helpError(){
    printf("\nErro de sintaxe na execusao do comando help");
    printf("\nhelp - Exibe a lista de todos os comandos disponiveis");
    printf("\nSintaxe:");
    printf("\n\nhelp\n\n");
    return 0;
}

int quitError(){
    printf("\nErro de sintaxe na execusao do comando quit");
    printf("\nquit - Sair do interpretador de comandos");
    printf("\nSintaxe:");
    printf("\n\nquit\n\n");
    return 0;
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

noarv* inicializa(void) {
       return NULL;
}

noarv* croot(int info){
       noarv *novo;
       if ((novo = aloca()) == NULL)
          return NULL;
       novo->dado = info;
       novo->esq = NULL;
       novo->dir = NULL;
       return(novo);
}


int cleft(){
    printf("\nfalta implementar");
    return 0;
}

int cright(){
    printf("\nfalta implementar");
    return 0;
}

int goleft(){
    printf("\nfalta implementar");
    return 0;
}
int goright(){
    printf("\nfalta implementar");
    return 0;
}
int back(){
    printf("\nfalta implementar");
    return 0;
}

int goroot(){
    printf("\nfalta implementar");
    return 0;
}

int search(){
    printf("\nfalta implementar");
    return 0;
}

int tree(){
    printf("\nfalta implementar");
    return 0;
}

int deltree(){
    printf("\nfalta implementar");
    return 0;
}

int height(){
    printf("\nfalta implementar");
    return 0;
}

int size(){
    printf("\nfalta implementar");
    return 0;
}

int cnextleft(){
    printf("\nfalta implementar");
    return 0;
}

int cnextright(){
    printf("\nfalta implementar");
    return 0;
}

int leafs(){
    printf("\nfalta implementar");
    return 0;
}

int quit(){
    char c;
    printf("Deseja realmente sair? S/N\n");
    c = getche();
    if (c == 's' || c == 'S'){
          return 1;
    }else{
          return 0;
    }
    
}
int whereami(){
    printf("\nfalta implementar");
    return 0;
}
