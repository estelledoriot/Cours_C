/* Estelle DORIOT           */
/*  Cours sur les tableaux */

#include <stdio.h> 

int maximum(int tab[], int N)
{
    int maxi = tab[0];
    for (int i = 0; i < N; i++)
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

int main()
{
    int tab[7] = {15, 7, 20, 3, 10, 11, 16};
    tab[3] = 19;

    for (int i = 0; i < 7; i++)
        printf("%d ", tab[i]);
    printf("\n");

    int maxi = maximum(tab, 7);
    printf("Le maximum de tab est: %d\n", maxi);

    int s = somme(tab, 7);
    printf("La somme des éléments de tab est: %d\n", s);

    int M[3][4] = {{8, 5, 2, 6}, {3, 4, 7, 9}, {1, 3, 0, 4}};
    printf("La case (1,2) de M est %d\n", M[1][2]);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%d ", M[i][j]);
        printf("\n");
    }

    return 0;
}