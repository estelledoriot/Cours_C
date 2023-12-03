/* Estelle DORIOT              */
/*  Exercices sur les tableaux */

#include "tableauxExos.h"

void ex1()
{
    printf("\n** Exercice n°1 **\n******************\n");

    int nb = 10;
    int tab[10];
    notes_hasard(tab, nb);
    afficher_tableau(tab, nb);
}

void afficher_tableau(int tab[], int nb)
{
    for (int i = 0; i < nb; i++)
        printf("%d ", tab[i]);
    printf("\n");
}

void notes_hasard(int tab[], int nb)
{
    srand(time(NULL));

    for (int i = 0; i < nb; i++)
        tab[i] = rand() % 21;
}