/* Estelle DORIOT              */
/*  Exercices sur les tableaux */

#include "tableauxExos.h"

void ex7()
{
    printf("\n** Exercice n°7 **\n******************\n");

    int tab[] = {330, 490, 380, 610, 780, 550};
    int taille = 6;
    int denivele = denivele_positif(tab, taille);
    printf("Dénivelé: %d\n", denivele);
}

int denivele_positif(int tab[], int taille)
{
    int denivelep = 0;
    for (int i = 0; i < taille; i++)
    {
        if (tab[i + 1] > tab[i])
            denivelep += tab[i + 1] - tab[i];
    }

    return denivelep;
}