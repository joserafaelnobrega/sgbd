#include "biblioteca.h"

void dados_linha(FILE *arquivo){
    int resposta;
char nome_das_colunas[500] = {"\0"};//primeiro nome das colunas
char nome_digitado[26];
int cont = 0;
int flag = 0;
int flag2= 1;
int flag3 = 0;
int contadorflag =0;
 while( (ch=fgetc(arquivo))!= \n ){
    cont++;
 }

if(flag){//criar chave primaria
    do{


                do{ //verifica se estao sendo escritos so numeros  se sao 4
                                    printf("insita a chave primaria de 4 digitos so com numeros\n");
                                    strcpy(nome_digitado,"\0");
                                    scanf("%4s",&nome_digitado);
                                    fflush(stdin);
                                    contadorflag = 0;
                                    for(int i = 0; i<3;i++){
                                                if(nome_digitado[i]== 0 || nome_digitado[i]== 1||nome_digitado[i]==2||nome_digitado[i]==3||nome_digitado[i]==4||nome_digitado[i]==5||nome_digitado[i]==6||nome_digitado[i]==7||nome_digitado[i]==8||nome_digitado[i]==9){
                                                    contadorflag++
                                                }
                                        if(contadoflag== 0){
                                            flag2 = 0;
                                        }



                                    }
                }while(flag2);

int interruptor = 1;

int contador = 0;
int chave = 0;

                 while( (c=fgetc(arquivo)) !=EOF){ //vai ler todos os numeros de chave primaria da tabela para saber se exits um igual
                        if (c== '\n' )
                        {
                            interruptor = 0;
                        }



                        if(interruptor == 0)
                        {

                            if(c != '\n')
                            {
                                inter = 1;
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
                        if(chave == numero_digitado){
                            printf("erro essa chave ja existe\n");
                            flag3 = 1;
                        }else if(chave != 0 || c == EOF){

                        flag3 = 0;
                        }


                 }


    }while(flag3);



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

     flag = 1;
}



        //outros dados da tabela


        system("cls");
        printf("insira o dado ou digite zero para pular o valor da coluna\n");
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
            printf("? 0-nao 1-sim\n");


            scanf("%d",&resposta);

        }while(resposta == 0 && resposta == 1);



}while(resposta);

        if(strlen(nome_das_colunas) == cont){
        fprintf(arquivo,"%s\n",nome_das_colunas);
        }else{
        printf("numero de dados nao é igual ao de colunas\n");
        }
        fflush(stdin);

}
