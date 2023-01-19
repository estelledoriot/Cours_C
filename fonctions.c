/* Estelle DORIOT           */
/*  Cours sur les fonctions */

#include <stdio.h>

void hello2()
{
    printf("Hello world !\n");
}

void hello(char *name)
{
    printf("Hello %s !\n", name);
}

int max1(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int max2(int a, int b)
{
    if (a > b)
        printf("%d\n", a);
    else
        printf("%d\n", b);
}

int puissance(int a, int n)
{
    int resultat = 1;
    for (int i = 1; i <= n; i++)
        resultat *= a;
    return resultat;
    printf("C'est inutile d'écrire ici\n");
}

int main()
{
    hello2();
    hello("Alice");
    hello("Bob");
    printf("%d\n", max1(3, 7));
    printf("%d\n", max1(9, 4));
    printf("%d\n", max1(max1(4, 9), 6));
    printf("%d\n", max2(max2(4, 9), 6));
    printf("%d\n", puissance(2, 3));
    return 0;
}