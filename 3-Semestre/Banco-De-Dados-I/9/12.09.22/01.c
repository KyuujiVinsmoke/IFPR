#include "ESTRUTURAS.h"

MYSQL conexao;
int res;
MYSQL_RES *resp;
MYSQL_ROW linhas;
MYSQL_FIELD *campos;
int conta; 

int main()
{
    char nome[45], email[100];
    int codigo, telefone;

    system ("clear");
    
    mysql_init(&conexao);             //link do phpMyAdmin    //link do seu banco  //nome de usuario  //senha de usuario
    if ( mysql_real_connect(&conexao, "wagnerweinert.com.br", "tads21_andrecruz", "tads21_andrecruz", "naotemsenha", 3306, NULL, 0))
    {
        printf ("conectado com sucesso!\n");

        for (int op = 9; op != 0;)
        {
            menu();
            scanf ("%i", &op);

            if (op == 1)
            {   
                menuCadastrar();
                scanf ("%i", &op);
                
                if (op == 1)
                {
                    printf ("\nNome:\n> ");
                    __fpurge(stdin);
                    gets(nome);

                    printf ("\nEmail:\n> ");
                    __fpurge(stdin);
                    gets(email);

                    printf ("\nTelefone:\n> ");
                    __fpurge(stdin);
                    gets(telefone);

                    printf ("\n");
                    cadastrarContato();
                }

                else if (op == 2)
                {
                    printf ("\nNome:\n> ");
                    __fpurge(stdin);
                    gets(nome);

                    printf ("\n");
                    cadastrarNome();
                }

                else if (op == 3)
                {
                    printf ("\nEmail:\n> ");
                    __fpurge(stdin);
                    gets(email);

                    printf ("\n");
                    cadastrarEmail();
                }

                else if (op == 4)
                {
                    printf ("\nTelefone:\n> ");
                    __fpurge(stdin);
                    gets(telefone);

                    printf ("\n");
                    cadastrarTelefone();
                }
            }

            else if (op == 2)
            {
                menuBuscar();
                scanf ("%i", &op);
                
                if (op == 1)
                {
                    printf ("\nCodigo:\n> ");
                    __fpurge(stdin);
                    gets(codigo);

                    printf ("\n");
                    buscarCodigo();
                }

                else if (op == 2)
                {
                    printf ("\nNome:\n> ");
                    __fpurge(stdin);
                    gets(nome);

                    printf ("\n");
                    buscarNome();
                }

                else if (op == 3)
                {
                    printf ("\nEmail:\n> ");
                    __fpurge(stdin);
                    gets(email);

                    printf ("\n");
                    buscarEmail();
                }

                else if (op == 4)
                {
                    printf ("\nTelefone:\n> ");
                    __fpurge(stdin);
                    gets(telefone);

                    printf ("\n");
                    buscarTelefone();
                }
            }

            else if (op == 3)
            {
                menuAlterar();
                scanf ("%i", &op);
                
                if (op == 1)
                {
                    printf ("\nNome:\n> ");
                    __fpurge(stdin);
                    gets(nome);

                    printf ("\n");
                    alteraEmail();
                }

                else if (op == 2)
                {
                    printf ("\nEmail:\n> ");
                    __fpurge(stdin);
                    gets(email);

                    printf ("\n");
                    alteraEmail();
                }

                else if (op == 3)
                {
                    printf ("\nTelefone:\n> ");
                    __fpurge(stdin);
                    gets(telefone);

                    printf ("\n");
                    alteraTelefone();
                }
            }

            else if (op == 4)
            {
                menuExcluir();
                scanf ("%i", &op);
                
                if (op == 1)
                {
                    printf ("\nCodigo:\n> ");
                    __fpurge(stdin);
                    gets(codigo);

                    printf ("\n");
                    excluirCodigo();
                }

                else if (op == 2)
                {
                    printf ("\nNome:\n> ");
                    __fpurge(stdin);
                    gets(nome);

                    printf ("\n");
                    excluirNome();
                }

                else if (op == 3)
                {
                    printf ("\nEmail:\n> ");
                    __fpurge(stdin);
                    gets(email);

                    printf ("\n");
                    excluirEmail();
                }

                else if (op == 4)
                {
                    printf ("\nTelefone:\n> ");
                    __fpurge(stdin);
                    gets(telefone);

                    printf ("\n");
                    excluirTelefone();
                }
            }

            else if (op == 5)
            {   
                printf ("\nCodigo:\n> ");
                __fpurge(stdin);
                gets(codigo);
                
                visualizarCodigo();   
            }
        }

        mysql_close(&conexao);
    }

    else
    {
        printf ("Falha de conexao\n");
        printf ("Erro %d : %s\n", mysql_errno(&conexao), mysql_error(&conexao));
    }

    printf ("\n\n");
    return 0;            
}  