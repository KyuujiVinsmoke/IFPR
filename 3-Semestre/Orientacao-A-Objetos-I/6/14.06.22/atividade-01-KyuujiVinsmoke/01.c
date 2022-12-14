#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define preto			printf ("\33[30m");
#define vermelho		printf ("\33[31m");
#define verde		    printf ("\33[32m");
#define amarelo		    printf ("\33[33m");
#define azulescuro		printf ("\33[34m");
#define roxo			printf ("\33[35m");
#define azulclaro		printf ("\33[36m");
#define branco		    printf ("\33[37m");

#define TAM 6

int main()
{
    srand(time(NULL));

    int op, numeros[6][10], l, c, jogada[TAM], n, sort[TAM], cont, error = 0, pontos = 0;

    for (op = 0; op <= TAM; op++)
    {
        system ("clear");
        amarelo printf ("______________________________________________\n");
        amarelo printf ("|                                            |\n");
        amarelo printf ("|                 ");
        azulescuro printf ("MEGA SENA");
        amarelo printf ("                  |\n");
        amarelo printf ("|____________________________________________|\n");
        amarelo printf ("|                                            |\n");
        amarelo printf ("|                                            |\n");
    
        for (l = 0, cont = 1; l < TAM; l++)
        {   
            amarelo printf ("|   ");
            for (c = 0; c < 10; c++)
            {
                branco;
                if (op == 0) { numeros[l][c] = cont, cont++; }

                for (n = 0; n < op; n++)
                {
                    if (jogada[n] == numeros[l][c]) { verde; }
                }

                if (numeros[l][c] < 10) { printf ("0"); }
                printf ("%i  ", numeros[l][c]);
            }
            amarelo printf (" |\n");
            amarelo printf ("|                                            |\n");
            amarelo printf ("|                                            |\n");
        }

        amarelo printf ("|____________________________________________|\n");
        amarelo printf ("|                                            |\n");
        
        if (op < TAM)
        {
            amarelo printf ("|            ");
            azulescuro printf ("Escolha O %i?? N??mero", op + 1);
            amarelo printf ("             |\n");
            amarelo printf ("|____________________________________________|\n");
            
            if (error == 1) { vermelho printf ("[WARNING] N??mero N??o Encontrado\n"), error = 0; }
            else if (error == 2) { vermelho printf ("[WARNING] N??mero Repetido\n"), error = 0; }
            
            branco printf ("> ");
            verde scanf ("%i", &jogada[op]);

            if (jogada[op] < 1 || jogada[op] > 60) { op--, error = 1; }

            for (cont = 0; cont < op;)
            {
                if (jogada[op] == jogada[cont]) { op--, error = 2; }
                else { cont++; }
            }
        }

        if (op == TAM)
        {   
            amarelo printf ("|           ");

            for (n = 0; n < TAM; n++)
            {
                sort[n] = 1 + rand() % 60;

                for (cont = 0; cont < n;)
                {
                    if (sort[n] == sort[cont]) { sort[n] = 1 + rand() % 60, cont = 0; }
                    else { cont++; }
                }

                vermelho;
                for (cont = 0; cont < TAM; cont++)
                {
                    if (jogada[cont] == sort[n]) { pontos++, verde; }
                }

                if (sort[n] < 10) { printf ("0%i  ", sort[n]); }
                else { printf ("%i  ", sort[n]); }
            }

            amarelo printf ("         |\n");
            amarelo printf ("|____________________________________________|\n\n");
        }

    }

    if (pontos == 0) { vermelho printf ("         Voc?? Errou Todos Os N??meros          "); }
    else if (pontos == 1) { vermelho printf ("            Voc?? Acertou Um N??mero            "); }
    else if (pontos == 2) { vermelho printf ("          Voc?? Acertou Dois N??meros           "); }
    else if (pontos == 3) { vermelho printf ("          Voc?? Acertou Tr??s N??meros           "); }
    else if (pontos == 4) { verde printf ("          Parab??ns Voc?? Fez A Quadra          "); }
    else if (pontos == 5) { verde printf ("          Parab??ns Voc?? Fez A Quina           "); }
    else if (pontos == 6) { verde printf ("           Parab??ns Voc?? Fez A Sena           "); }

    branco;
    printf ("\n\n");
    return 0;            
}  