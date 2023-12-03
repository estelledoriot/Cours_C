/* Estelle DORIOT               */
/*  Exercices sur les fonctions */

#include "fonctionsExos.h"

long factorielle(int n)
{
    long p = 1;
    for (int i = 1; i <= n; i++)
        p *= i;
    return p;
}

int catalan(int n)
{
    return factorielle(2 * n) / (factorielle(n + 1) * factorielle(n));
}

void ex10()
{
    printf("\n** Exercice n°10 **\n*******************\n");

    printf("0! = %ld\n", factorielle(0));
    printf("1! = %ld\n", factorielle(1));
    printf("4! = %ld\n", factorielle(4));
    printf("C0 = %d\n", catalan(0));
    printf("C1 = %d\n", catalan(1));
    printf("C7 = %d\n", catalan(7));
}