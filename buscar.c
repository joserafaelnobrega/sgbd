#include "biblioteca.h"

void buscar(){

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
    }

    int tamanho_total;

    fseek(arquivo, 0, SEEK_END);

    tamanho_total = ftell(arquivo);

    char *texto;


    texto =(char*) malloc(tamanho_total);






    free(texto);

}
