#ifndef _ESTRUTURAS_
#define _ESTRUTURAS_

#include <stdio.h>
#include <stdio_ext.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <mysql/mysql.h>

#define preto			printf ("\33[30m");
#define vermelho		printf ("\33[31m");
#define verde		    printf ("\33[32m");
#define amarelo		    printf ("\33[33m");
#define azulescuro		printf ("\33[34m");
#define roxo			printf ("\33[35m");
#define azulclaro		printf ("\33[36m");
#define branco		    printf ("\33[37m");

void menu();

void menuCadastrar();
void cadastrarContato();
void cadastrarNome();
void cadastrarEmail();
void cadastrarTelefone();

void menuBuscar();
void buscarCodigo();
void buscarNome();
void buscarEmail();
void buscarTelefone();

void menuAlterar();
void alterarNome();
void alteraEmail();
void alteraTelefone();

void menuExcluir();
void excluirCodigo();
void excluirNome();
void excluirEmail();
void excluirTelefone();

void visualizarCodigo();

void menu()
{   
    printf ("1) Cadastrar\n");
    printf ("2) Buscar\n");
    printf ("3) Alterar\n");
    printf ("4) Excluir\n");
    printf ("5) Visualizar\n");
    printf ("0) Sair\n");
    printf ("> ");
}

void menuCadastrar()
{   
    printf ("\n1) Cadastrar Novo Contato\n");
    printf ("2) Cadastrar Novo Nome\n");
    printf ("3) Cadastrar Novo Email\n");
    printf ("4) Cadastrar Novo Telefone\n");
    printf ("0) Sair\n");
    printf ("> ");
}

void cadastrarContato()
{

}

void cadastrarNome()
{

}

void cadastrarEmail()
{

}

void cadastrarTelefone()
{

}

void menuBuscar()
{
    printf ("\n1) Buscar Por Codigo\n");
    printf ("2) Buscar Por Nome\n");
    printf ("3) Buscar Por Email\n");
    printf ("4) Buscar Por Telefone\n");
    printf ("0) Sair\n");
    printf ("> ");
}

void buscarCodigo()
{

}

void buscarNome()
{

}

void buscarEmail()
{

}

void buscarTelefone()
{

}

void menuAlterar()
{
    printf ("\n1) Alterar Por Nome\n");
    printf ("2) Alterar Por Email\n");
    printf ("3) Alterar Por Telefone\n");
    printf ("0) Sair\n");
    printf ("> ");
}

void alterarNome()
{

}

void alteraEmail()
{

}

void alteraTelefone()
{

}

void menuExcluir()
{
    printf ("\n1) Excluir Por Codigo\n");
    printf ("2) Excluir Por Nome\n");
    printf ("3) Excluir Por Email\n");
    printf ("4) Excluir Por Telefone\n");
    printf ("0) Sair\n");
    printf ("> ");
}

void excluirCodigo()
{

}

void excluirNome()
{

}

void excluirEmail()
{

}

void excluirTelefone()
{

}

void visualizarCodigo()
{

}

#endif