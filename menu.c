#include "biblioteca.h"

void menu()
{

    printf("digite o numero da opcao que deseja \n\n*****************************************************\n\n1-criar nova tabela\n2-listar tabelas\n");
    printf("3-criar linha\n4-listar todas as informacoes de uma tabela\n6-apagar um registro\n7-excluir tabela\n8-finalizar\n");
    printf("*****************************************************\n");
    int digi;
    scanf("%d", &digi);

    switch(digi)
    {
    case 1 :

        criar_tabela();
        break;

    case 2 :
        listar_tabelas();
        break;
    case 3 :
        criar_dados();
        break;

    case 4 :
        listar_dados();
        break;
    case 5 :
        busca();
        break;
    case 6:
        apagar();
        break;

    case 7 :
        excluir();
        break;
    case 8 :
        exit(0);

    default:
        system("cls");
        printf("opcao nao encontrada\n");

    }


}
