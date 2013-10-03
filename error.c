#include "error.h"

int cleftError(){
    printf("\nErro de sintaxe na execusao do comando cleft");
    printf("\ncleft - Cria filho esquerdo de um no");
    printf("\nSintaxe:");
    printf("\n\ncleft <valor>\n\n");
    return 0;
}



int goleftError(){
    printf("\nErro de sintaxe na execusao do comando goleft");
    printf("\ngoleft - Caminha para o filho esquerdo");
    printf("\nSintaxe:");
    printf("\n\ngoleft\n\n");
    return 0;
}

int crightError(){
    printf("\nErro de sintaxe na execusao do comando cright");
    printf("\ncright - Cria filho direito de um no");
    printf("\nSintaxe:");
    printf("\n\ncright <valor>\n\n");
    return 0;
}

int gorightError(){
    printf("\nErro de sintaxe na execusao do comando goright");
    printf("\ngoright - Caminha para o filho direito");
    printf("\nSintaxe:");
    printf("\n\ngoright\n\n");
    return 0;
}

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

int crootError(){
    printf("\nErro de sintaxe na execusao do comando croot");
    printf("\ncroot - Cria raiz da arvore");
    printf("\nSintaxe:");
    printf("\n\ncroot <valor>\n\n");
    return 0;
}

int cnextleftError(){
    printf("\nErro de sintaxe na execusao do comando cnextleft");
    printf("\ncnextleft - Adiciona valor no proximo no esquerdo disponivel\n");
    printf("\nSintaxe:");
    printf("\n\ncnextleft <valor>\n\n");
    return 0;
}

int cnextrightError(){
    printf("\nErro de sintaxe na execusao do comando cnextright");
    printf("\ncnextright - Adiciona valor no proximo no direito disponivel\n");
    printf("\nSintaxe:");
    printf("\n\ncnextright <valor>\n\n");
    return 0;
}

int whereamiError(){
    printf("\nErro de sintaxe na execusao do comando whereami");
    printf("\nwhereami - Exibe o local (conteúdo) onde se encontra o nó relativo");
    printf("\nSintaxe:");
    printf("\n\nwhereami\n\n");
    return 0;
}

int sizeError(){
    printf("\nErro de sintaxe na execusao do comando size");
    printf("\nsize - Exibe a quantidade de nos da arvore");
    printf("\nSintaxe:");
    printf("\n\nsize\n\n");
    return 0;
}


int gorootError(){
    printf("\nErro de sintaxe na execusao do comando goroot");
    printf("\ngoroot - Volta para a raiz da arvore");
    printf("\nSintaxe:");
    printf("\n\ngoroot\n\n");
    return 0;
}

int searchError(){
    printf("\nErro de sintaxe na execusao do comando search");
    printf("\nsearch - Pesquisa a existencia de um no na arvore");
    printf("\nSintaxe:");
    printf("\n\nsearch <valor>\n\n");
    return 0;
}

int treeError(){
    printf("\nErro de sintaxe na execucao do comando tree\n");
    printf("tree - lista os nos da arvore em caminhamento pre-ordem, pos-ordem ou in-ordem\n\n");
    printf("Sintaxe:\n");
    printf("tree <argumento>\n\n");
    printf("Argumentos\n");
    printf("/pre : caminhamento em pre-ordem\n");
    printf("/pos : caminhamento em pos-ordem\n");
    printf("/in : caminhamento em in-ordem\n");
}

int deltreeError(){
    printf("\nErro de sintaxe na execusao do comando deltree");
    printf("\ndeltree - Remove todos os nos da arvore ou uma subarvore de um no");
    printf("\nSintaxe:");
    printf("\n\ndeltree\n\n");
    return 0;

}

int backError(){
    printf("\nRetorna para o no ancestral\n");
    printf("\nSintaxe:");
    printf("\n\nback\n\n");
    return 0;
}

int leafsError(){
   
    printf("\nRetorna a quantidade de nos folha\n");
    printf("\nSintaxe:");
    printf("\n\nleafs\n\n");
    return 0;
}

int heightError(){
    printf("\nErro de sintaxe na execusao do comando height");
    printf("\nheight - Retorna a altura da arvore\n");
    printf("\nSintaxe:");
    printf("\n\nheight\n\n");
    return 0;
}

