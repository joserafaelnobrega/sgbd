#include "biblioteca.h"

void criar_dados()
{

    system("cls");
    char nome [100] = {'\0'};
    printf("informe o nome do arquivo:\n");
    scanf("%s",nome);
    strcat(nome,".txt");
    char nome2[] = {"C:\\Users\\Public\\Documents\\SGBD\\arquivos\\"};
    strcat(nome2,nome);
    system("cls");
    FILE * arquivo = fopen(nome2, "r+" );

    if ( arquivo == NULL )
    {
        printf("falha ao criar ou abrir arquivo\n");
    }


    int linhas;
    printf("digite o numero de linhas que serao criadas\n");
    scanf("%d",&linhas);

    int i= 0;
//chave primaria
    int *chave;
    chave =  malloc( linhas* sizeof(int)  );


    while(i!=linhas)
    {
        printf("insira o valor\n");
        //chaves+i =
        scanf(" %d",&chave+i);
        fprintf(arquivo,"%d",chave+i);
        fprintf(arquivo,"\n");
        i++;
    }
    system("cls");

    printf("escolha o tipo de dado da coluna\n");
    printf("1-inteiro\n2-float\n3-double\n4-char\n5-string\n");
    int tipo = 0;
    scanf("%d", &tipo);

    if(tipo == 1 ){
        inteiro(linhas);
    }else if(tipo == 2){
        flo(linhas);
    }else if(tipo == 3){
        doub(linhas);
    }else if(tipo == 4 ){
        ch(linhas);
    }else if(tipo == 5){
        st(linhas);
    }else{
    printf("tipo nao encontrado\n");
    }

    system("cls");


}



