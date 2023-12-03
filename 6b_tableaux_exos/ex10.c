/* Estelle DORIOT              */
/*  Exercices sur les tableaux */

#include "tableauxExos.h"

void ex10()
{
    printf("\n** Exercice n°10 **\n*******************\n");

    int nb1 = 3;
    int tab1[] = {3, 2, 5};
    printf("Arret de la balle: %d\n", indice_arret(tab1, nb1));

    int nb2 = 12;
    int tab2[] = {10, 8, 7, 5, 5, 4, 3, 6, 6, 5, 4, 12};
    printf("Arret de la balle: %d\n", indice_arret(tab2, nb2));
}

int indice_arret(int tab[], int taille)
{
    for (int i = 1; i < taille; i++)
    {
        if (tab[i] > tab[i - 1])
            return i - 1;
    }
    return taille;
}
