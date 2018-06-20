#include "biblioteca.h"

void apagar()
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

    if ( arquivo == NULL )
    {
        printf("falha ao criar ou abrir arquivo\n");
        exit(0);
    }

    FILE *intermediario = fopen("intermediario.txt","w");

    if ( intermediario == NULL )
    {
        printf("erro no processo\n");
        exit(0);
    }


    char c;//o caracter que vai sair do arquivo e entrar no outro
    char str[10] = {"\0"}; // string que vai recer a chave
    int interruptor = 1;
    int interruptor2 = 1;
    int inter = 0;
    int contador = 0;

    int chave = 0; //numero da chave primaria no arquivo
    int numero_digitado;//numero da chave informado pelo usuario




    printf("digite o numero da chave primaria");
    scanf("%d",&numero_digitado);


    while( (c=fgetc(arquivo)) !=EOF)
    {
        if (c== '\n' && inter == 0)
        {
            interruptor = 0;
        }



        if(interruptor == 0)
        {

            if(c != '\n')
            {
                interruptor2 = 0;
                str[contador] = c;
                contador++;
            }

            if(contador == 4)  //colocando dentro de um inteiro
            {

                contador = 0;
                interruptor = 1;
                chave = atoi(str);

            }
        }
        if(chave == numero_digitado)
        {
            if(c == '\n')
            {
                interruptor2 = 1;
                strcpy(str,"\0");
                chave = 0;
                inter = 1;
            }
        }
        else if(chave !=0)
        {
            fprintf(intermediario,"%s",str);
            strcpy(str,"\0");
            interruptor2 = 1;
            chave = 0;
        }


        if(interruptor2 != 0)
        {
            fputc(c,intermediario);
        }
    }



    fechar_arquivo(intermediario);
    fechar_arquivo(arquivo);



    FILE * arquivo = fopen(nome2, "w+" );

    if ( arquivo == NULL )
    {
        printf("falha ao criar ou abrir arquivo\n");
        exit(0);
    }

    FILE *intermediario = fopen("intermediario.txt","r");

    if ( intermediario == NULL )
    {
        printf("erro no processo\n");
        exit(0);
    }

    while( (c=fgetc(intermediario)) !=EOF)
    {
        fputc(c,arquivo);
    }

    fechar_arquivo(intermediario);
    fechar_arquivo(arquivo);

}
