/* Estelle DORIOT               */
/*  Exercices sur les fonctions */

#include "fonctionsExos.h"

float aire_triangle(float a, float b, float c)
{
    float p = (a + b + c) / 2;
    float aire = sqrt(p * (p - a) * (p - b) * (p - c));
    return aire;
}

void ex3()
{
    printf("\n** Exercice n°3 **\n******************\n");

    printf("L'aire du triangle est %f.\n", aire_triangle(3, 4, 5));
}