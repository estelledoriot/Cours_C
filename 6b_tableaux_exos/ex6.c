/* Estelle DORIOT              */
/*  Exercices sur les tableaux */

#include "tableauxExos.h"

void ex6()
{
    printf("\n** Exercice n°6 **\n******************\n");

    int tab3[50] = {1, 2, 3, 4};
    int taille = 4;
    inserer(tab3, 10, 1, &taille);
    printf("Insertion de 10 à l'indice 1 dans {1, 2, 3, 4}: ");
    afficher_tableau(tab3, taille);
    int tab4[50] = {1, 3, 5, 7, 9, 15};
    int taille2 = 6;
    insert_sorted(tab4, 8, &taille2);
    printf("Insertion: ");
    afficher_tableau(tab4, taille2);
}

void inserer(int tab[], int el, int idx, int *taille)
{
    if (idx > *taille)
        return;
    int temp = tab[idx];
    tab[idx] = el;
    for (int i = idx + 1; i < *taille; i++)
    {
        int temp2 = tab[i];
        tab[i] = temp;
        temp = temp2;
    }
    tab[*taille] = temp;
    *taille += 1;
}

void insert_sorted(int tab[], int el, int *taille)
{
    int temp;
    for (int i = 0; i < *taille - 1; i++)
    {
        if (tab[i] < el && el <= tab[i + 1])
        {
            temp = tab[i + 1];
            tab[i + 1] = el;
        }
        else if (el <= tab[i + 1])
        {
            int temp2 = tab[i + 1];
            tab[i + 1] = temp;
            temp = temp2;
        }
    }
    tab[*taille] = temp;
    *taille += 1;
}
