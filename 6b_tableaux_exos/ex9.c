/* Estelle DORIOT              */
/*  Exercices sur les tableaux */

#include "tableauxExos.h"

void ex9()
{
    printf("\n** Exercice n°9 **\n******************\n");

    int nb1 = 10;
    int tab1[] = {2, 1, 2, 4, 0, 4, 5, 3, 5, 6};
    printf("Nombre de batiments éclairés: %d\n", nb_batiments_eclaires(tab1, nb1));

    int nb2 = 4;
    int tab2[] = {0, 3, 1, 2};
    printf("Nombre de batiments éclairés: %d\n", nb_batiments_eclaires(tab2, nb2));
}

int nb_batiments_eclaires(int tab[], int taille)
{
    if (taille == 0)
        return 0;

    int nb, dernier = tab[0];
    if (dernier == 0)
        nb = 0;
    else
        nb = 1;

    for (int i = 1; i < taille; i++)
    {
        if (tab[i] > dernier)
        {
            dernier = tab[i];
            nb += 1;
        }
    }
    return nb;
}
