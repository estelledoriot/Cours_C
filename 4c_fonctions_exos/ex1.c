/* Estelle DORIOT               */
/*  Exercices sur les fonctions */

#include "fonctionsExos.h"

float imc(float masse, float taille)
{
    return masse / (taille * taille);
}

void ex1()
{
    printf("\n** Exercice n°1 **\n******************\n");

    printf("Une personne de 80 kg mesurant 1 mètre 80 a un IMC de %f.\n", imc(80, 1.80));
}