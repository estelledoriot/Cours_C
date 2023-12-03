/* Estelle DORIOT              */
/*  Exercices sur les tableaux */

#include "tableauxExos.h"

void ex4()
{
    printf("\n** Exercice n°4 **\n******************\n");

    int nb = 10;
    int tab[10] = {4, 38, 45, 24, 83, 65, 36, 13, 23, 79};
    int res[10];
    carres(tab, res, nb);
    printf("tab au carrés:\n");
    afficher_tableau(res, nb);
}

void carres(int tab[], int res[], int n)
{
    for (int i = 0; i < n; i++)
        res[i] = tab[i] * tab[i];
}