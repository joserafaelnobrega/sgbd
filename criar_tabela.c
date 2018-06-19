#include "biblioteca.h"

void criar_tabela()
{
    system("cls");
    //ler o nome da tabela
    printf("Informe o nome da nova tabela\n");
    char nome_tabela[100];
    scanf("%s",nome_tabela);//le nome da tabela

    strcat(nome_tabela,".txt");
    char table[] = "C:\\Users\\Public\\Documents\\SGBD\\arquivos\\";
    strcat(table,nome_tabela);//coloca o arquivo na parta de arquivos


    //criar a tabela
    FILE  *tabela =  fopen( table, "a+");
    system("cls");

    if ( tabela == NULL )
    {
        printf("falha ao criar tabela\n");
    }
    else
    {
        printf("\ntabela criada\n\n");
    }




    fechar_arquivo(tabela);
    //criar_dados(tabela);
}
