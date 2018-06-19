#include "biblioteca.h"

void listar_dados()
{
    system("cls");
    char nome [100] = {'\0'};
    printf("informe o nome do arquivo:\n");
    scanf("%s",nome);
    strcat(nome,".txt");
    char nome2[] = {"C:\\Users\\Public\\Documents\\SGBD\\arquivos\\"};
    strcat(nome2,nome);
    system("cls");
    FILE * arquivo = fopen(nome2, "r" );
    char ch;


    if( arquivo == NULL )

    {

        printf( "Erro na abertura do arquivo ou arquivo nao encontrado\n" );



    }
    else
    {
        while( (ch=fgetc(arquivo))!= EOF )
            putchar(ch);
    }
    printf("\n\n\n");
    fechar_arquivo(arquivo);

}
