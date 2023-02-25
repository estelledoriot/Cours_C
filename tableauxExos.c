/* Estelle DORIOT           */
/*  Exercices sur les tableaux */

#include <stdio.h> 
#include <stdlib.h>
#include <time.h>



/* Exercice n°1 */
void notes_hasard(int tab[], int nb)
{
    srand(time(NULL));

    for (int i = 0; i < nb; i++)
        tab[i] = rand() % 21;
}

/* Exercice n°2 */
int somme(int tab[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
        s += tab[i];
    return s;
}

int appartient(int valeur, int tab[], int n)
{
    for (int i = 0; i < n; i++)
        if (tab[i] == valeur)
            return 1;
    return 0;
}

int indice(int valeur, int tab[], int n)
{
    for (int i = 0; i < n; i++)
        if (tab[i] == valeur)
            return i;
    return -1;
}

int nb_occurrences(int valeur, int tab[], int n)
{
    int nb = 0;
    for (int i = 0; i < n; i++)
        if (tab[i] == valeur)
            nb ++;
    return nb;
}

int croissant(int tab[], int n)
{
    for (int i = 0; i < n-1; i++)
        if (tab[i] > tab[i+1])
            return 0;
    return 1;
}

int maximum(int tab[], int n)
{
    int maxi = tab[0];
    for (int i = 1; i < n; i++)
        if (tab[i] > maxi)
            maxi = tab[i];
    return maxi;
}

int minimum(int tab[], int n)
{
    int mini = tab[0];
    for (int i = 1; i < n; i++)
        if (tab[i] < mini)
            mini = tab[i];
    return mini;
}

int indice_max(int tab[], int n)
{
    int maxi = tab[0];
    int ind_max = 0;
    for (int i = 1; i < n; i++)
        if (tab[i] > maxi)
        {
            maxi = tab[i];
            ind_max = i;
        } 
    return ind_max;
}

int indice_min(int tab[], int n)
{
    int mini = tab[0];
    int ind_min = 0;
    for (int i = 1; i < n; i++)
        if (tab[i] < mini)
        {
            mini = tab[i];
            ind_min = i;
        }
    return ind_min;
}

int derniere_occurrence(int valeur, int tab[], int n)
{
    int index = -1;
    for (int i = 0; i < n; i++)
        if (tab[i] == valeur)
            index = i;
    return index;
}

/* Exercice n°3 */
double moyenne_simple(int notes[], int n)
{
    double moyenne = 0;
    for (int i = 0; i < n; i++)
        moyenne += notes[i];
    return moyenne/n;
}

double moyenne_ponderee(int notes[], double coeffs[], int n)
{
    double moyenne = 0;
    double coeff = 0;
    for (int i = 0; i < n; i++)
    {
        moyenne += notes[i] * coeffs[i];
        coeff += coeffs[i];
    }
    return moyenne/coeff;
}


int main()
{
    /* Exercice n°1 */
    printf("\n** Exercice n°1 **\n******************\n");

    int nb = 10;
    int tab[10];
    notes_hasard(tab, nb);

    for (int i = 0; i < nb; i++)
        printf("%d ", tab[i]);
    printf("\n");

    /* Exercice n°2 */
    printf("\n** Exercice n°2 **\n******************\n");

    printf("Somme des éléments de tab: %d\n", somme(tab, nb));
    printf("15 est-il dans tab: %d\n", appartient(15, tab, nb));
    printf("Indice de 15 dans tab: %d\n", indice(15, tab, nb));
    printf("Nombre d'occurrences de 15 dans tab: %d\n", nb_occurrences(15, tab, nb));
    printf("Est-ce que tab est croissant: %d\n", croissant(tab, nb));
    printf("Maximum de tab: %d\n", maximum(tab, nb));
    printf("Minimum de tab: %d\n", minimum(tab, nb));
    printf("Indice du maximum de tab: %d\n", indice_max(tab, nb));
    printf("Indice du minimum de tab: %d\n", indice_min(tab, nb));
    printf("La dernière occurrence de 15 dans tab: %d\n", indice(15, tab, nb));

    /* Exercice n°3 */
    printf("\n** Exercice n°3 **\n******************\n");
    int notes[] = {15, 16, 14, 12}; 
    double coeffs[] = {0.5, 1, 2, 0.5};
    printf("Moyenne des notes [15, 16, 14, 12]: %f\n", moyenne_simple(notes, 4));
    printf("Moyenne pondérée des notes: %f\n",moyenne_ponderee(notes, coeffs, 4));

    return 0;
}