#include "biblioteca.h"

void excluir()
{

    char nome [100] = {'\0'};
    printf("informe o nome do arquivo:\n");
    scanf("%s",nome);
    strcat(nome,".txt");
    char nome2[] = {"C:\\Users\\Public\\Documents\\SGBD\\arquivos\\"};
    strcat(nome2,nome);
    system("cls");
    int ret = remove(nome2);
    if(ret == 0)
    {
        printf("\ntabela excluida com sucesso\n");
    }
    else
    {
        printf("\nfalha ao exluir tabela\n");
    }
}
