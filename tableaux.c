/* Estelle DORIOT           */
/*  Cours sur les tableaux */

#include <stdio.h>

int maximum(int tab[], int taille);
int somme(int tab[], int taille);
void print_matrix1(int *m, int n, int p);
void print_matrix2(int n, int m[][4]);

int main()
{
    int tab[7] = {15, 7, 20, 3, 10, 11, 16};
    tab[3] = 19;

    int truc[10] = {0};
    for (int i = 0; i < 10; i++)
        printf("%d ", truc[i]);
    printf("\n");

    // parcours de tableau
    for (int i = 0; i < 7; i++)
        printf("%d ", tab[i]);
    printf("\n");

    int maxi = maximum(tab, 7);
    printf("Le maximum de tab est: %d\n", maxi);

    // tailles de tableau
    int donnees[50];
    printf("Veuillez donner une taille de tableau (entre 1 et 50): ");
    int taille = 0;
    scanf("%d", &taille);
    printf("Veuillez donner les valeurs à stocker:\n");
    for (int i = 0; i < taille; i++)
    {
        scanf("%d", &donnees[i]);
    }

    // utilisation de fonctions
    printf("Tableau: %p\n", donnees);
    printf("Adresse du premier élément: %p\n", &donnees[0]);

    int s = somme(donnees, taille);
    printf("La somme des éléments de donnees est: %d\n", s);

    // matrices
    int M[3][4] = {{8, 5, 2, 6}, {3, 4, 7, 9}, {1, 3, 0, 4}};
    printf("La case (1,2) de M est %d\n", M[1][2]);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%d ", M[i][j]);
        printf("\n");
    }

    print_matrix1(&M[0][0], 3, 4);
    print_matrix2(3, M);

    return 0;
}

int maximum(int tab[], int taille)
{
    int maxi = tab[0];
    for (int i = 0; i < taille; i++)
        if (tab[i] > maxi)
            maxi = tab[i];
    return maxi;
}

int somme(int tab[], int taille)
{
    int s = 0;
    for (int i = 0; i < taille; i++)
        s += tab[i];
    return s;
}

void print_matrix1(int *m, int n, int p)
{
    // affiche une matrice m de taille n*p (linéarisée)
    for (int i = 0; i < n; i++) // i parcourt les lignes
    {
        for (int j = 0; j < p; j++) // j parcourt les colonnes
            printf("%d ", m[i * p + j]);
        printf("\n");
    }
}

void print_matrix2(int n, int m[][4])
{
    // affiche une matrice m de taille n*4
    for (int i = 0; i < n; i++) // i parcourt les lignes
    {
        for (int j = 0; j < 4; j++) // j parcourt les colonnes
            printf("%d ", m[i][j]);
        printf("\n");
    }
}