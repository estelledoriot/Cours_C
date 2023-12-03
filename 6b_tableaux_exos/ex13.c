/* Estelle DORIOT              */
/*  Exercices sur les tableaux */

#include "tableauxExos.h"

void ex13()
{
    printf("\n** Exercice n°13 **\n*******************\n");

    int nb = 20;
    int res[50];
    nombres_premiers(nb, res);
    printf("nombres premiers: ");
    afficher_tableau(res, nb);
}

void nombres_premiers(int n, int premiers[])
{
    int nb = 0;
    int i = 2;
    while (nb < n)
    {
        bool premier = true;
        for (int j = 0; j < nb; j++)
        {
            if (i % premiers[j] == 0)
            {
                premier = false;
                break;
            }
        }
        if (premier)
        {
            premiers[nb] = i;
            nb++;
        }
        i++;
    }
}