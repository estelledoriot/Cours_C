/* Estelle DORIOT               */
/*  Exercices sur les fonctions */

#include "fonctionsExos.h"

int s1(int n)
{
    int somme = 0;
    for (int i = 1; i <= n; i++)
        somme = somme + i;
    return somme;
}

int s3(int n)
{
    int somme = 0;
    for (int i = 1; i <= n; i++)
        somme = somme + i * i * i;
    return somme;
}

void ex9()
{
    printf("\n** Exercice n°9 **\n******************\n");

    printf("La somme des entiers de 1 à 100 est: %d\n", s1(100));
    printf("La somme des cubes des entiers de 1 à 100 est: %d\n", s3(100));

    bool res = false;
    for (int n = 1; n <= 1000; n++)
        if (s1(n) * s1(n) != s3(n))
        {
            res = true;
            printf("Pour n = {%d}, on a s3({%d}) != s1({%d}) ** 2\n", n, n, n);
            break;
        }
    if (!res)
        printf("Il n'y a aucun n <= 1000 pour lequel s3(n) != s1(n) ** 2\n");
}