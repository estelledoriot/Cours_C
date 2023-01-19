/* Estelle DORIOT             */
/*  Cours sur les boucles for */

#include <stdio.h>

int main()
{
    // boucle simple
    for (int i = 1; i <= 5; i++)
        printf("%d\n", i);

    // boucle + if
    int n;
    printf("Veuillez donner un entier: ");
    scanf("%d", &n);
    printf("Voici les nombres pairs inférieurs à %d:\n", n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            printf("%d\n", i);
    }

    // boucles imbriquées
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 2; j++)
            printf("%d %d\n", i, j);

    // break
    int nombre;
    printf("Donner un entier: ");
    scanf("%d", &nombre);
    int premier = 1;
    for (int i = 2; i < nombre; i++)
    {
        if (nombre % i == 0)
        {
            premier = 0;
            break;
        }
    }
    if (nombre == 1)
        printf("1 n'est pas premier\n");
    else if (premier)
        printf("%d est premier\n", nombre);
    else
        printf("%d n'est pas premier\n", nombre);

    // for et while
    int somme = 0;
    for (int i = 100; i <= 200; i++)
        somme += i;
    printf("La somme est %d\n", somme);

    int somme2 = 0;
    int i = 100;
    while (i <= 200)
    {
        somme2 += i;
        i++;
    }    
    printf("La somme est %d\n", somme2);

    return 0;
}