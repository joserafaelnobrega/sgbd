#include "biblioteca.h"

void menu(){

printf("digite a opcao que deseja utilizar\n\n*********************************\n\n1-criar nova tabela\n2-consultar\n");
int digi;
scanf("%d", &digi);

switch(digi){
case 1 :

    criar_tabela();
    break;

case 2 :
    printf("ainda vai ter");
    break;
default:
    printf("opçao nao encontrada");

}


}
