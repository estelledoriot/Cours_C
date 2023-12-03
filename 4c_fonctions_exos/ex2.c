/* Estelle DORIOT               */
/*  Exercices sur les fonctions */

#include "fonctionsExos.h"

float aire_trapeze(float a, float b, float h)
{
    return (a + b) * h / 2;
}

void ex2()
{
    printf("\n** Exercice n°2 **\n******************\n");

    printf("L'aire du trapèze est %f.\n", aire_trapeze(2, 4, 5));
}