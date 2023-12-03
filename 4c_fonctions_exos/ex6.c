/* Estelle DORIOT               */
/*  Exercices sur les fonctions */

#include "fonctionsExos.h"

void ligne(int n, int m)
{
    for (int i = 1; i <= n; i++)
        printf("A");
    for (int i = 1; i <= m; i++)
        printf("B");
    printf("\n");
}

void carre(int m)
{
    for (int i = 1; i <= m; i++)
        ligne(i, m - i);
}

void ex6()
{
    printf("\n** Exercice n°6 **\n******************\n");

    carre(10);
}