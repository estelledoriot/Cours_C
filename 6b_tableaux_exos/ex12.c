/* Estelle DORIOT              */
/*  Exercices sur les tableaux */

#include "tableauxExos.h"

void ex12()
{
    printf("\n** Exercice n°12 **\n*******************\n");

    int nb = 10;
    int res[50] = {1, 5, 3, 9, 4, 4};
    fibonacci(nb, res);
    printf("fibonacci(%d): ", nb);
    afficher_tableau(res, nb);
}

void fibonacci(int n, int tab[])
{
    tab[0] = 1;
    tab[1] = 1;
    for (int i = 2; i < n; i++)
    {
        tab[i] = tab[i - 1] + tab[i - 2];
    }
}