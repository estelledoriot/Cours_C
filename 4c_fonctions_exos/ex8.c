/* Estelle DORIOT               */
/*  Exercices sur les fonctions */

#include "fonctionsExos.h"

bool est_premier(int n)
{
    if (n == 1)
        return false; // 1 n'est pas premier
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) // si n admet un diviseur autre que 1 et lui-même il n'est pas premier
            return false;
    return true; // sinon il est premier
}

void ex8()
{
    printf("\n** Exercice n°8 **\n******************\n");

    bool res = true;
    for (int i = 0; i <= 40; i++)
        if (!est_premier(i * i - i + 41))
        {
            res = false;
            printf("Il existe un f(n) non premier pour n entre 0 et 40 : f(%d) = %d\n", i, i * i - i + 41);
            break;
        }
    if (res)
        printf("Tous les f(n) pour n entre 0 et 40 sont premiers.\n");

    int compteur = 0;
    for (int i = 0; i <= 100; i++)
        if (!est_premier(i * i - i + 41))
            compteur++;

    printf("Il y a %d f(n) non premiers pour n inférieur à 100.\n", compteur);
}