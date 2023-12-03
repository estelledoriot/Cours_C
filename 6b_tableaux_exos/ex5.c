/* Estelle DORIOT              */
/*  Exercices sur les tableaux */

#include "tableauxExos.h"

void ex5()
{
    printf("\n** Exercice n°5 **\n******************\n");

    int tab1[] = {1, 7, 4, 9, 4, 7, 1};
    printf("{1, 7, 4, 9, 4, 7, 1} est symétrique: %d\n", symetrique(tab1, 7));
    int tab2[] = {1, 2, 3, 4};
    printf("{1, 2, 3, 4} est symétrique: %d\n", symetrique(tab2, 4));
    printf("Echange des indices 1 et 3 de {1, 7, 4, 9, 4, 7, 1}: ");
    echange(tab1, 1, 3);
    afficher_tableau(tab1, 7);
    printf("Tableau miroir: ");
    miroir(tab1, 7);
    afficher_tableau(tab1, 7);
}

bool symetrique(int tab[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (tab[i] != tab[n - 1 - i])
            return false;
    }
    return true;
}

void echange(int tab[], int i, int j)
{
    int temp = tab[i];
    tab[i] = tab[j];
    tab[j] = temp;
}

void miroir(int tab[], int n)
{
    for (int i = 0; i < n / 2; i++)
        echange(tab, i, n - 1 - i);
}