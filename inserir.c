#include "biblioteca.h"

void inserir (FILE *arquivo)
{

//nome das colunas
    int resposta;
    char nome_das_colunas[400] = {"chave_primaria---------|\0"};//primeiro nome das colunas

    char nome_digitado[26];//receber o nome




    do
    {
        system("cls");
        printf("digite o nome da coluna\n");
        strcpy(nome_digitado,"\0");

        scanf("%23s",&nome_digitado);//armazena o nome da coluna
        fflush(stdin);

        int tamanho_string = strlen(nome_digitado);// medir o tamanho da string


        if(tamanho_string>23)
        {
            nome_digitado[23] = '|';
            nome_digitado[24] = '\0';
        }
        else
        {
            for(int i = tamanho_string; i<23; i++ )
            {
                nome_digitado[i] = '-';
            }
            nome_digitado[23] = '|';
            nome_digitado[24] = '\0';
        }

        strcat(nome_das_colunas,nome_digitado);



        do
        {
            printf("deseja criar outra coluna? 0-nao 1-sim\n");


            scanf("%d",&resposta);

        }
        while(resposta == 0 && resposta == 1);



    }
    while(resposta);
    fprintf(arquivo,"%s\n",nome_das_colunas);
    fflush(stdin);


}
