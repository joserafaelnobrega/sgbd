#include "biblioteca.h"

void inteiro(int linhas )
{
    char nome [100] = {'\0'};
    printf("informe o nome do arquivo:\n");
    scanf("%s",nome);
    strcat(nome,".txt");
    char nome2[] = {"C:\\Users\\Public\\Documents\\SGBD\\arquivos\\"};
    strcat(nome2,nome);
    system("cls");
    FILE * arquivo = fopen(nome2, "a+" );

    if ( arquivo == NULL )
    {
        printf("falha ao criar ou abrir arquivo\n");
    }


    int cont = 0;

    //nome da coluna
    printf("digite o nome da coluna\n");
    char coluna[100];
    scanf("%s",&coluna);
    fprintf(arquivo," %s",&coluna);
    fprintf(arquivo,"\n");

    int *inteiro;
    inteiro = malloc(linhas*sizeof(int));


    do
    {

        printf("digite um valor");
        scanf(" %d", &inteiro[cont]);
        fprintf(arquivo," %d",inteiro+cont);
        fprintf(arquivo,"\n");
        cont++;

    }
    while(cont!=linhas);
    fechar_arquivo(arquivo);
}