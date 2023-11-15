/* Estelle DORIOT              */
/*  Exercices sur les tableaux */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void afficher_tableau(int tab[], int nb);
void notes_hasard(int tab[], int nb);
int somme(int tab[], int n);
int appartient(int valeur, int tab[], int n);
int indice(int valeur, int tab[], int n);
int nb_occurrences(int valeur, int tab[], int n);
int croissant(int tab[], int n);
int maximum(int tab[], int n);
int minimum(int tab[], int n);
int indice_max(int tab[], int n);
int indice_min(int tab[], int n);
int derniere_occurrence(int valeur, int tab[], int n);
double moyenne_simple(int notes[], int n);
double moyenne_ponderee(int notes[], double coeffs[], int n);
void carres(int tab[], int res[], int n);
bool symetrique(int tab[], int n);
void echange(int tab[], int i, int j);
void miroir(int tab[], int n);
void inserer(int tab[], int el, int idx, int *taille);
void insert_sorted(int tab[], int el, int *taille);
int denivele_positif(int tab[], int taille);

int main()
{
    /* Exercice n°1 */
    printf("\n** Exercice n°1 **\n******************\n");

    int nb = 10;
    int tab[10];
    notes_hasard(tab, nb);
    afficher_tableau(tab, nb);

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
    printf("Moyenne pondérée des notes: %f\n", moyenne_ponderee(notes, coeffs, 4));

    /* Exercice n°4 */
    printf("\n** Exercice n°4 **\n******************\n");
    int res[10];
    carres(tab, res, nb);
    printf("tab au carrés:\n");
    afficher_tableau(res, nb);

    /* Exercice n°5 */
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

    /* Exercice n°6 */
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

    /* Exercice n°7 */
    printf("\n** Exercice n°7 **\n******************\n");
    int tab5[] = {330, 490, 380, 610, 780, 550};
    int taille3 = 6;
    int denivele = denivele_positif(tab5, taille3);
    printf("Dénivelé: %d\n", denivele);

    return 0;
}

void afficher_tableau(int tab[], int nb)
{
    for (int i = 0; i < nb; i++)
        printf("%d ", tab[i]);
    printf("\n");
}

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
            nb++;
    return nb;
}

int croissant(int tab[], int n)
{
    for (int i = 0; i < n - 1; i++)
        if (tab[i] > tab[i + 1])
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
    return moyenne / n;
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
    return moyenne / coeff;
}

/* Exercice n°4 */
void carres(int tab[], int res[], int n)
{
    for (int i = 0; i < n; i++)
        res[i] = tab[i] * tab[i];
}

/* Exercice n°5 */
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

/* Exercice n°6 */
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

/* Exercice n°7 */
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