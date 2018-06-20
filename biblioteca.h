#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>

void fechar_arquivo( FILE *arquivo); //fecha um arqu
void criar_tabela();// cria uma tabela
void criar_dados(); //criar dados da tabela chama outras funçoes
void menu(); // cria o menu principal
void listar_tabelas();//lista todas as tabelas criadas
void listar_dados();// lista todo o conteudo da tabela
void excluir(); //exclui a tabela que for informada o nome
void apagar();// apaga uma linha de uma tabela
void dados_linha(FILE *arquivo);//
void inserir(FILE *arquivo);
void busca();
#endif // BIBLIOTECA_H_INCLUDED
