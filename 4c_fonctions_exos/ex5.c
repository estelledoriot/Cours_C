/* Estelle DORIOT               */
/*  Exercices sur les fonctions */

#include "fonctionsExos.h"

float distance_au_carre(float x1, float y1, float x2, float y2)
{
    return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
}

bool est_rectangle(float xa, float ya, float xb, float yb, float xc, float yc)
{
    float ab2 = distance_au_carre(xa, ya, xb, yb);
    float ac2 = distance_au_carre(xa, ya, xc, yc);
    float bc2 = distance_au_carre(xb, yb, xc, yc);
    return (bc2 == ab2 + ac2) || (ab2 == ac2 + bc2) || (ac2 == ab2 + bc2);
}

void ex5()
{
    printf("\n** Exercice n°5 **\n******************\n");

    if (est_rectangle(5, 2, 2, 2, 2, 6))
        printf("Le triangle est rectangle\n");
    else
        printf("Le triangle n'est pas rectangle\n");
}