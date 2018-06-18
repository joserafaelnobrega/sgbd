#include "biblioteca.h"

void criar_dados(FILE *tabela)
{
    int escolha;


    int inteiro;
    float flutuante;
    double real;
    char caracter;
    char nome[5];


    do
    {
        printf("selecione o tipo de dado que deseja inserir\n **************************************\n");
        printf("1- inteiro\n2-caracter\n3-string\n4-double\n5-float\n*********************************\n");

        scanf("%d", &escolha);
        system("cls");

        if(escolha == 1 ){
            system("cls");
            printf("digite o valor:\n");
            scanf("%d", &inteiro);
        }else if( escolha == 2){
            system("cls");
            printf("digite o caracter:\n");
            scanf("%c", &caracter);
        }else if(escolha == 3){
            system("cls");
            printf("digite o nome:\n");
            gets(nome);
            puts(nome);
        }else if(escolha == 4 ){
            system("cls");
            printf("digite o valor:\n");
            scanf("%lf", &real);
        }else if(escolha == 5){
            system("cls");
            printf("digite o valor:\n");
            scanf("%f", &flutuante);
        }else{
            printf("valor informado incorreto \n\n");
        }

    }
    while(escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4 && escolha !=5);

//criar os dados





}
