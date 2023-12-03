/* Estelle DORIOT              */
/*  Exercices sur les tableaux */

#include "tableauxExos.h"

void ex11()
{
    printf("\n** Exercice n°11 **\n*******************\n");

    int nb1 = 6;
    int tab1[] = {1, 5, 3, 9, 4, 4};
    printf("{1, 5, 3, 9, 4, 4} contient des doublons: %d\n", doublons(tab1, nb1));

    int nb2 = 6;
    int tab2[] = {1, 2, 3, 4, 5, 6};
    printf("{1, 2, 3, 4, 5, 6} contient des doublons: %d\n", doublons(tab2, nb2));

    int nb3 = 8;
    int tab3[] = {1, 4, 5, 1, 5, 4, 9, 1};
    int nb_res = 0;
    int res[50];
    suppr_doublons(tab3, nb3, res, &nb_res);
    printf("{1, 4, 5, 1, 5, 4, 9, 1} sans doublons: ");
    afficher_tableau(res, nb_res);
}

bool doublons(int tab[], int taille)
{
    for (int i = 0; i < taille; i++)
    {
        for (int j = i + 1; j < taille; j++)
        {
            if (tab[i] == tab[j])
                return true;
        }
    }
    return false;
}

void suppr_doublons(int tab[], int taille, int res[], int *nb)
{
    *nb = 0;
    for (int i = 0; i < taille; i++)
    {
        bool present = false;
        for (int j = 0; j < *nb; j++)
        {
            if (res[j] == tab[i])
            {
                present = true;
                break;
            }
        }
        if (!present)
        {
            res[*nb] = tab[i];
            (*nb)++;
        }
    }
}

void concatene(int tab1[], int taille1, int tab2[], int taille2, int res[], int *taille)
{
    *taille = taille1 + taille2;
    for (int i = 0; i < taille1; i++)
    {
        res[i] = tab1[i];
    }
    for (int i = 0; i < taille2; i++)
    {
        res[taille1 + i] = tab2[i];
    }
}