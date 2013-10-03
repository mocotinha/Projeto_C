#include "arvore.h"

int cleftInfo(){
    printf("\nCria filho esquerdo de um no");
    printf("\nSintaxe:");
    printf("\n\ncleft <valor>\n\n");
    return 0;
}

int goleftInfo(){
    printf("\nCaminha para o filho esquerdo");
    printf("\nSintaxe:");
    printf("\n\ngoleft\n\n");
    return 0;
}

int crightInfo(){
    printf("\nCria filho direito de um no");
    printf("\nSintaxe:");
    printf("\n\ncright <valor>\n\n");
    return 0;
}

int gorightInfo(){
    printf("\nCaminha para o filho direito");
    printf("\nSintaxe:");
    printf("\n\ngoright\n\n");
    return 0;
}

int helpInfo(){
    printf("\nExibe a lista de todos os comandos disponiveis");
    printf("\nSintaxe:");
    printf("\n\nhelp\n\n");
    return 0;
}

int quitInfo(){
    printf("\nSair do interpretador de comandos");
    printf("\nSintaxe:");
    printf("\n\nquit\n\n");
    return 0;
}

int crootInfo(){
    printf("\nCria raiz da arvore");
    printf("\nSintaxe:");
    printf("\n\ncroot <valor>\n\n");
    return 0;
}
int cnextleftInfo(){
    printf("\nAdiciona valor no proximo no esquerdo disponivel\n");
    printf("\nSintaxe:");
    printf("\n\ncnextleft <valor>\n\n");
    return 0;
}

int cnextrightInfo(){
    printf("\nAdiciona valor no proximo no direito disponivel\n");
    printf("\nSintaxe:");
    printf("\n\ncnextright <valor>\n\n");
    return 0;
}

int sizeInfo(){
    printf("\nExibe a quantidade de nos da arvore");
    printf("\nSintaxe:");
    printf("\n\nsize\n\n");
    return 0;
}

int gorootInfo(){
    printf("\nVolta para a raiz da arvore");
    printf("\nSintaxe:");
    printf("\n\ngoroot\n\n");
    return 0;
}

int treeInfo(){
    printf("\nLista os nos da arvore em caminhamento pre-ordem, pos-ordem ou in-ordem\n");
    printf("Sintaxe:\n");
    printf("tree <argumento>\n");
    printf("Argumentos\n");
    printf("/pre : caminhamento em pre-ordem\n");
    printf("/pos : caminhamento em pos-ordem\n");
    printf("/in : caminhamento em in-ordem\n");
}

int deltreeInfo(){
    printf("\nRemove todos os nos da arvore ou uma subarvore de um no");
    printf("\nSintaxe:");
    printf("\n\ndeltree\n\n");
    return 0;
}

int backInfo(){
    printf("\nErro de sintaxe na execusao do comando back");
    printf("\nback - Retorna para o no ancestral\n");
    printf("\nSintaxe:");
    printf("\n\nback\n\n");
    return 0;
}

int leafsInfo(){
    printf("\nErro de sintaxe na execusao do comando leafs");
    printf("\nleafs - Retorna a quantidade de nos folha\n");
    printf("\nSintaxe:");
    printf("\n\nleafs\n\n");
    return 0;
}

int heightInfo(){
   
   printf("\nRetorna a altura da arvore\n");
    printf("\nSintaxe:");
    printf("\n\nheight\n\n");
    return 0;
}

int searchInfo(){
    printf("\nPesquisa a existencia de um no na arvore");
    printf("\nSintaxe:");
    printf("\n\nsearch <valor>\n\n");
    return 0;
}

