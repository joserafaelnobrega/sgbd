#include "biblioteca.h"

FILE abrir_arquivo(){

system("cls");
    char nome [100] = {'\0'};
    printf("informe o nome do arquivo:\n");
    scanf("%s",nome);
    strcat(nome,".txt");
    char nome2[] = {"C:\\Users\\Public\\Documents\\SGBD\\arquivos\\"};
    strcat(nome2,nome);
    system("cls");
    FILE * arquivo = fopen(nome2, "r" );


    if( arquivo == NULL )

    {

        printf( "Erro na abertura do arquivo ou arquivo nao encontrado\n" );



    }


return *arquivo;

}
