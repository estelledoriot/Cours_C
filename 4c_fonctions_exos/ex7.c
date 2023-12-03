/* Estelle DORIOT               */
/*  Exercices sur les fonctions */

#include "fonctionsExos.h"

float moyenneDe(int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
        s += rand() % 6 + 1;
    return (float)s / n;
}

int premier6()
{
    int de = 0, tour = 0;
    while (de != 6)
    {
        de = rand() % 6 + 1;
        tour++;
    }
    return tour;
}

void ex7()
{
    printf("\n** Exercice n°7 **\n******************\n");

    srand(time(NULL));
    printf("La moyenne des dés obtenue sur 10000 lancers est %f.\n", moyenneDe(10000));

    printf("On obtient le premier 6 au bout de %d lancers.\n", premier6());

    int s = 0;
    for (int i = 1; i <= 10000; i++)
        s += premier6();

    printf("Il faut en moyenne %f lancers pour obtenir un 6.\n", (float)s / 10000);
}