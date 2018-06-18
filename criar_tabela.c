#include "biblioteca.h"

void criar_tabela()
{

    //ler o nome da tabela
    printf("Informe o nome da nova tabela\n");
    char nome[100];
    gets(nome);
    strcat(nome,".txt");
    char table[] = "C:\\Users\\Public\\Documents\\SGBD\\arquivos\\";
    strcat(table,nome);


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
    criar_dados(tabela);
}
