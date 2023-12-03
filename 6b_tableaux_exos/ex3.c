/* Estelle DORIOT              */
/*  Exercices sur les tableaux */

#include "tableauxExos.h"

void ex3()
{
    printf("\n** Exercice n°3 **\n******************\n");
    int notes[] = {15, 16, 14, 12};
    double coeffs[] = {0.5, 1, 2, 0.5};
    printf("Moyenne des notes [15, 16, 14, 12]: %f\n", moyenne_simple(notes, 4));
    printf("Moyenne pondérée des notes: %f\n", moyenne_ponderee(notes, coeffs, 4));
}

double moyenne_simple(int notes[], int n)
{
    double moyenne = 0;
    for (int i = 0; i < n; i++)
        moyenne += notes[i];
    return moyenne / n;
}

double moyenne_ponderee(int notes[], double coeffs[], int n)
{
    double moyenne = 0;
    double coeff = 0;
    for (int i = 0; i < n; i++)
    {
        moyenne += notes[i] * coeffs[i];
        coeff += coeffs[i];
    }
    return moyenne / coeff;
}