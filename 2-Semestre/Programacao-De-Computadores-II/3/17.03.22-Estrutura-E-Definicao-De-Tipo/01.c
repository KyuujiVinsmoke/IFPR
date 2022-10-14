#include "PARK.h"

int main ()
{
    system ("clear");

    int opcao;
    char *p = malloc (20 * sizeof(char));

    for (opcao = 1; opcao > 0 && opcao < 4;)
    {
        Painel ();
        scanf ("%i", &opcao);

        if (opcao == 1) 
        { 
            Entrada();
            printf (" - Marca: ");
            __fpurge(stdin);
            gets(db[pos].marca);
            printf (" - Modelo: ");
            __fpurge(stdin);
            gets(db[pos].modelo);
            printf (" - Cor: ");
            __fpurge(stdin);
            gets(db[pos].cor);
            printf (" - Placa: ");
            __fpurge(stdin);
            gets(db[pos].placa);

            printf ("\n[OK]\n\n");
        }

        else if (opcao == 2) 
        { 
            printf ("\n[SAIDA DE VEICULOS]\n");
            printf (" - Placa: ");
            __fpurge(stdin);
            gets(p);
            Saida(p);

            if (Saida(p) == 1) { printf ("\n[OK]\n\n"); }
            else { printf ("\n[ERROR404]: Placa não encontrada!\n\n"); }
        }
        
        else if (opcao == 3) 
        { 
            Visualizar(); 
        }

        else { printf ("--------- THE END ---------"); }
    }

    printf ("\n\n");
    return 0;
}