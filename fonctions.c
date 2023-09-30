/* Estelle DORIOT           */
/*  Cours sur les fonctions */

#include <stdio.h>

int a = 8; // variable globale

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

void max2(int a, int b)
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

int factorielle(int n)
{
    int a = 1;
    for (int i = 1; i <= n; i++)
        a = a * i;
    return a;
}

int truc(int n)
{
    return n * a;
}

void incremente1()
{
    a++;
}

int incremente(int b)
{
    b++;
    return b;
}

int factorielle_rec(int n)
{
    if (n == 1)
        return 1;
    else
        return n * factorielle_rec(n - 1);
}

int main()
{
    hello2();
    hello("Alice");
    hello("Bob");

    char *prenom;
    printf("Veuillez donner votre prenom: ");
    scanf("%s", prenom);
    hello(prenom);

    printf("%d\n", max1(3, 7));
    printf("%d\n", max1(9, 4));
    printf("%d\n", max1(max1(4, 9), 6));
    /* génère une erreur
    printf("%d\n", max2(max2(4, 9), 6));
    */
    printf("%d\n", puissance(2, 3));

    printf("Factorielle 4: %d\n", factorielle(4));
    /* génère une erreur
    printf("a = %d\n", a);
    */

    for (int i = 1; i <= 3; i++)
        printf("Hello !\n");
    /* génère une erreur
    printf("i = %d\n", i);
    */

    int b = truc(3); // utilise la variable a
    printf("b = %d\n", b);

    incremente1(); // modification de a
    printf("a = %d\n", a);

    int a = 8;
    a = incremente(a);
    printf("a = %d\n", a);

    printf("Factorielle (recursive) 4: %d\n", factorielle_rec(4));

    return 0;
}