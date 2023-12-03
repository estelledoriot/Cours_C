/* Estelle DORIOT               */
/*  Exercices sur les fonctions */

#include "fonctionsExos.h"

int F(int n)
{
    if (n <= 10)
        return 8000 * n;
    else
        return 8000 * 10 + 11300 * (n - 10);
}

int G(int n)
{
    return 10000 * n;
}

void ex4()
{
    printf("\n** Exercice n°4 **\n******************\n");

    printf("Si le joueur marque 12 buts, il recevra %d du club F et %d du club G.\n", F(12), G(12));

    int buts = 0, f = 0, g = 0;
    while (g >= f)
    {
        buts++;
        f = F(buts);
        g = G(buts);
    }
    printf("A partir de %d buts, la prime du club F est plus intéressante.\n", buts);
}