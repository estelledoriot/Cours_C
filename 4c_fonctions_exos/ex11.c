/* Estelle DORIOT               */
/*  Exercices sur les fonctions */

#include "fonctionsExos.h"

int PGCD(int a, int b)
{
    int d1 = a, d2 = b, r = d1 % d2;
    while (r != 0)
    {
        d1 = d2;
        d2 = r;
        r = d1 % d2;
    }
    return d2;
}

int PPCM(int a, int b)
{
    return (a * b) / PGCD(a, b);
}

void ex11()
{
    printf("\n** Exercice n°11 **\n*******************\n");

    printf("Le PGCD de 30 et 75 est %d\n", PGCD(30, 75));
    printf("Le PPCM de 30 et 75 est %d\n", PPCM(30, 75));
}