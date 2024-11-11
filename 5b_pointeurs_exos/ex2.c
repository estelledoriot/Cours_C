/* Estelle DORIOT               */
/*  Exercices sur les pointeurs */

#include "pointeursExos.h"

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void minmax(int *x, int *y)
{
    if (*x > *y)
        swap(x, y);
}

void ex2()
{
    printf("\n** Exercice n°2 **\n******************\n");

    int a = 42, b = 38;
    printf("Avant l'échange, a = %d et b = %d\n", a, b);
    swap(&a, &b);
    printf("Après l'échange, a = %d et b = %d\n", a, b);

    int c = 68, d = 12;
    printf("Avant l'échange, c = %d et d = %d\n", c, d);
    minmax(&c, &d);
    printf("Après l'échange, c = %d et d = %d\n", c, d);
}