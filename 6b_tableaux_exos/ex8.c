/* Estelle DORIOT              */
/*  Exercices sur les tableaux */

#include "tableauxExos.h"

void ex8()
{
    printf("\n** Exercice n°8 **\n******************\n");

    int nb = 10;
    int tab1[] = {2, 8, 4, 9, 3, 4, 5, 8, 3, 2};
    int tab2[] = {4, 5, 9, 7, 1, 5, 3, 8, 9, 3};
    int res[50];
    printf("Somme de {2, 8, 4, 9, 3, 4, 5, 8, 3, 2} et {4, 5, 9, 7, 1, 5, 3, 8, 9, 3}:\n");
    somme_tab(tab1, tab2, res, nb);
    afficher_tableau(res, nb);

    multiplier(2, tab1, nb);
    printf("Multiplication par 2 de {2, 8, 4, 9, 3, 4, 5, 8, 3, 2}:\n");
    afficher_tableau(tab1, nb);

    printf("Tous positifs ");
    afficher_tableau(tab1, nb);
    printf(": %d\n", tous_positifs(tab1, nb));

    printf("Un positif ");
    afficher_tableau(tab1, nb);
    printf(": %d\n", un_positif(tab1, nb));
}

void somme_tab(int tab1[], int tab2[], int res[], int taille)
{
    for (int i = 0; i < taille; i++)
    {
        res[i] = tab1[i] + tab2[i];
    }
}

void multiplier(int k, int tab[], int taille)
{
    for (int i = 0; i < taille; i++)
    {
        tab[i] *= k;
    }
}

bool tous_positifs(int tab[], int taille)
{
    for (int i = 0; i < taille; i++)
    {
        if (tab[i] < 0)
            return false;
    }
    return true;
}

bool un_positif(int tab[], int taille)
{
    for (int i = 0; i < taille; i++)
    {
        if (tab[i] >= 0)
            return true;
    }
    return false;
}