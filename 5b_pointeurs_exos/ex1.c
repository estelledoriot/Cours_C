/* Estelle DORIOT               */
/*  Exercices sur les pointeurs */

#include "pointeursExos.h"

void ex1()
{
    printf("\n** Exercice n°1 **\n******************\n");

    int n = 42;
    int *p = NULL;
    p = &n;
    printf("La valeur de la variable n est %d\n", n);
    n = 43;
    printf("La valeur de la variable n est maintenant %d\n", n);
    *p = 44;
    printf("La valeur de la variable n est maintenant %d\n", n);
    printf("L'adresse de la variable n est %p\n", &n);
}