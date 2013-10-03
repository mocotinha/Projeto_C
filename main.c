#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"
#include "info.h"
#include "error.h"

int main(int argc, char *argv[]){
    char entrada[50], *str,*str2,*str3, dtc; //dtc = deltreeconfirm
    int existeNoRaiz = 0,altura = 0,qntNo = 0;
    noarv* arv = inicializa();
    noarv* ancestral = inicializa();
    noarv* aux = inicializa();
    printf("TreeBuilder App v1.0\n");
    printf("Authors: Jozias Rolim(jozias.rolim@dce.ufpb.br\n"); 
    printf("         Geferson Ribeiro(geferson.ribeiro@dce.ufpb.br)\n");
    printf("========================================================\n");
    printf(">");
    
    while (1){
          gets(entrada);
          str = strtok(entrada," ");
          if(!(qntNo))
             existeNoRaiz = 0;
          if(str == NULL){
                 printf(">");
                 continue;
          }
          str2 = strtok(NULL," ");
          
          if ((!(strcmp(str,"help"))) && (str2==NULL)){
             help();
          }else if((!(strcmp(str,"help"))) && !(strcmp(str2,"/?"))){
             helpInfo();
          }else if((!(strcmp(str,"help"))) && (str2!=NULL)){
             helpError();
          }else if(!(strcmp(str,"tree")) && str2==NULL){
                treeError();
          }else if(!(strcmp(str,"tree")) && str2!=NULL){
                str3 = strtok(NULL," ");
                if(str3 != NULL)
                     treeError();
                else if(!(strcmp(str2,"/pre"))){
                     printf("[ ");
                     preordem(arv);
                     printf("]\n");
                }else if(!(strcmp(str2,"/in"))){
                      printf("[ ");
                      inordem(arv);
                      printf("]\n");
                }else if(!(strcmp(str2,"/pos"))){
                      printf("[ ");
                      posordem(arv);
                      printf("]\n");
                }else if(!(strcmp(str2,"/?")))
                     treeInfo();
                else
                     treeError();
          }else if(!(strcmp(str,"back"))&& (str2==NULL)){
                if(qntNo == 0){
                     printf("[msg]Voce nao pode voltar, pois voce nao esta em nenhum no.\n");
                     printf("OBS: Ainda nao existe o no raiz.\n");
                      
                }else if(whereami(aux)==whereami(arv))
                     printf("[msg]Voce nao pode voltar, pois ja se encontra no no raiz.\n");                           
                else{
                    aux = back(aux);
                    printf("[msg]A raiz relativa agora esta no no %d.\n",whereami(aux));
                }
          }else if(!(strcmp(str,"back"))&& !(strcmp(str2,"/?"))){
                backInfo();
          }else if(!(strcmp(str,"back"))&& (str2!=NULL)){
                backError();
          }else if(!(strcmp(str,"leafs"))&& (str2==NULL)){
             printf("A quantidade de nos folhas sao: %d\n",leafs(arv));
          }else if(!(strcmp(str,"leafs"))&& !(strcmp(str2,"/?"))){
                leafsInfo();
          }else if(!(strcmp(str,"leafs"))&& (str2!=NULL)){
                leafsError();
          }else if(!(strcmp(str,"height"))&& (str2==NULL)){
                printf("A altura da arvore e: %d\n",height(arv));
          }else if((!(strcmp(str,"height")))&& (!(strcmp(str2,"/?")))){
                heightInfo();
          }else if(!(strcmp(str,"height"))&& (str2!=NULL)){
                heightError();
          }else if(!(strcmp(str,"quit"))&& (str2==NULL)){
             if(quit()){
                 return 0;       
             }else{
                 printf("\n>");
                
                 continue;
             }
          }else if(!(strcmp(str,"quit"))&& !(strcmp(str2,"/?"))){
                quitInfo();
          }else if(!(strcmp(str,"quit"))&& (str2!=NULL)){
                quitError();
          }
          
          else if(!(strcmp(str,"deltree"))&& (str2==NULL)){
             if(qntNo){
                       printf("Essa opcao ira eliminar o no atual %d e o demais nos filhos.\n",whereami(aux));
                       printf("Deseja continuar? S/N\n");
                       dtc = getche();
                       if(dtc == 's' || dtc =='S'){ 
                              ajusteAncestral(ancestral,aux);
                              qntNo = qntNo-contarNos(aux);
                              deltree(aux);
                              aux = ancestral;
                              printf("\n");
                       }else if(dtc=='n' || dtc=='N'){
                             continue;
                       }else{
                             printf(" e um comando invalido.\n");
                             printf("Falha na execusao do comando deltree.\n");
                       }
             }else{
                   printf("[msg] Voce precisa ter pelo menos o no raiz na arvore para executar esse comando\n");
             }
             
          }else if(!(strcmp(str,"deltree"))&& !(strcmp(str2,"/?"))){
                deltreeInfo();
          }else if(!(strcmp(str,"deltree"))&& (str2!=NULL)){
                deltreeError();
          }else if(!(strcmp(str,"whereami")) && (str2 == NULL)){
                if(!(whereami(aux)))
                    printf("[error] Arvore nao criada.\n");
                else if(qntNo == 0)
                    printf("[error] Arvore nao criada.\n");
                else
                    printf("Voce esta localizado no no %d.\n",whereami(aux));
          }else if(!(strcmp(str,"whereami")) && (str2 != NULL)){
                whereamiError();
          }else if(!(strcmp(str,"size")) && (str2 == NULL)){
                printf("Quantidade de nos da arvore: %d.\n",qntNo);
          }else if(!(strcmp(str,"size")) && !(strcmp(str2,"/?"))){
                sizeInfo();
          }else if(!(strcmp(str,"size")) && (str2 != NULL)){
                sizeError();
          }else if(!(strcmp(str,"goroot")) && (str2 == NULL)){
                aux = arv;
                printf("Voce esta no no raiz: %d.\n",whereami(aux));
          }else if(!(strcmp(str,"goroot")) && !(strcmp(str2,"/?"))){
                gorootInfo();
          }else if(!(strcmp(str,"goroot")) && (str2 != NULL)){
                gorootError();
          }else if(!(strcmp(str,"search")) && (str2!=NULL)){
                str3 = strtok(NULL," ");
                if(!(strcmp(str2,"/?")) && (str3 == NULL)){
                     searchInfo();
                }else if(str3 != NULL){
                      searchError();
                }else{
                     if(search(arv,atoi(str2)))
                         printf("O no existe na arvore.\n");
                     else
                         printf("O no nao existe na arvore.\n");
                }
          }else if(!(strcmp(str,"croot")) && (str2==NULL)){
                crootError();
          }else if(!(strcmp(str,"goleft")) && (str2==NULL)){
               if(goleft(aux) != NULL){
                   ancestral = aux;
                   aux = goleft(aux);
                   printf("[msg]A raiz relativa agora esta no no %d.\n",whereami(aux));
               }else
                    printf("[msg]O no nao possui filho esquerdo.\n");         
          }else if(!(strcmp(str,"goleft")) && (str2!=NULL)){
                str3 = strtok(NULL," ");
                if(!(strcmp(str2,"/?")) && (str3 == NULL)){
                    goleftInfo();  
                }else if(str3 != NULL){
                    goleftError();
                }   
          }else if(!(strcmp(str,"goright")) && (str2==NULL)){
               if(goright(aux) != NULL){
                   ancestral = aux;
                   aux = goright(aux);
                   printf("[msg]A raiz relativa agora esta no no %d.\n",whereami(aux));
               }else
                    printf("[msg]O no nao possui filho direito.\n");         
          }else if(!(strcmp(str,"goright")) && (str2!=NULL)){
                str3 = strtok(NULL," ");
                if(!(strcmp(str2,"/?")) && (str3 == NULL)){
                    gorightInfo();  
                }else if(str3 != NULL){
                    gorightError();
                }   
          }else if(!(strcmp(str,"croot")) && (str2!=NULL)){
                str3 = strtok(NULL," ");
                if(!(strcmp(str2,"/?")) && (str3 == NULL)){
                     crootInfo();
                }else if(str3 != NULL){
                        crootError();
                }else if(existeNoRaiz == 0){
                      arv = croot(atoi(str2));
                      printf("[msg] raiz com o valor %s criado com sucesso\n",str2);
                      aux = arv;
                      qntNo++;
                      existeNoRaiz = 1;
                }else{
                      printf("[msg] A arvore ja possuiu uma raiz. Operacao invalida!\n");
                }
          }else if(!(strcmp(str,"croot")) && (str2==NULL)){
                crootError();
          }
          else if(!(strcmp(str,"cnextleft")) && (str2!=NULL)){
                str3 = strtok(NULL," ");
                if(!(strcmp(str2,"/?")) && (str3 == NULL)){
                     cnextleftInfo();
                }else if(str3 != NULL){
                        cnextleftError();
                }else{
                      if(qntNo){
                                aux = cnextleft(arv);
                                cleft(aux,atoi(str2));
                                qntNo++;
                                printf("[msg]A raiz relativa agora esta no no %d.\n",whereami(aux));
                                printf("[msg] Filho esquerdo com valor %s criado com sucesso.\n",str2);
                      }else{
                            printf("A arvoré precisa ter pelo menos o no raiz para executar esse comando.\n");
                      }
                      
                }
          }else if(!(strcmp(str,"cnextleft")) && (str2==NULL)){
                cnextleftError();
          }
          
          else if(!(strcmp(str,"cnextright")) && (str2!=NULL)){
                str3 = strtok(NULL," ");
                if(!(strcmp(str2,"/?")) && (str3 == NULL)){
                     cnextrightInfo();
                }else if(str3 != NULL){
                        cnextrightError();
                }else{
                      if(qntNo){
                             aux = cnextright(arv);
                             cright(aux,atoi(str2));
                             qntNo++;
                             printf("[msg]A raiz relativa agora esta no no %d.\n",whereami(aux));
                             printf("[msg] Filho direito com valor %s criado com sucesso.\n",str2);   
                      }else{
                            printf("A arvoré precisa ter pelo menos o no raiz para executar esse comando.\n");
                      }
                      
                      
                }
          }else if(!(strcmp(str,"cnextright")) && (str2==NULL)){
                cnextrightError();
          }
          
          
          else if(!(strcmp(str,"cleft")) && (str2!=NULL)){
                str3 = strtok(NULL," ");
                if(!(strcmp(str2,"/?")) && (str3 == NULL)){
                     cleftInfo();
                }else if(str3 != NULL){
                        cleftError();
                }else if(cleft(aux,atoi(str2))){
                      qntNo++;
                      printf("[msg] Filho esquerdo com valor %s criado com sucesso.\n",str2);
                }else{
                      printf("[msg] O no ja possuiu um filho esquerdo ou arvore nao criada. Operacao invalida!");
                }
          }else if(!(strcmp(str,"cleft")) && (str2==NULL)){
                cleftError();
          }else if(!(strcmp(str,"cright")) && (str2!=NULL)){
                str3 = strtok(NULL," ");
                if(!(strcmp(str2,"/?")) && (str3 == NULL)){
                     crightInfo();
                }else if(str3 != NULL){
                        crightError();
                }else if(cright(aux,atoi(str2))){
                       qntNo++;
                      printf("[msg] Filho direito com valor %s criado com sucesso.\n",str2);
                }else{
                      printf("[msg] O no ja possuiu um filho direito ou arvore nao criada. Operacao invalida!\n");
                }
          }else if(!(strcmp(str,"cright")) && (str2==NULL)){
                crightError();
          }else{
                printf("Comando inexistente.\n");
                printf("O comando: help - Exibe a lista de comandos disponiveis.\n");
          }
          printf(">");
    }	
    return 1;
}





