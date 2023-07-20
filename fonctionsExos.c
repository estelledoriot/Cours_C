/* Estelle DORIOT               */
/*  Exercices sur les fonctions */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/* Exercice n°1 */
float imc(float masse, float taille)
{
    return masse / (taille * taille);
}

/* Exercice n°2 */
float aire_trapeze(float a, float b, float h)
{
    return (a + b) * h / 2;
}

/* Exercice n°3 */
float aire_triangle(float a, float b, float c)
{
    float p = (a + b + c) / 2;
    float aire = sqrt(p * (p - a) * (p - b) * (p - c));
    return aire;
}

/* Exercice n°4 */
int F(int n)
{
    if (n <= 10)
        return 8000 * n;
    else
        return 8000 * 10 + 11300 * (n - 10);
}

int G(int n)
{
    return 10000 * n;
}

/* Exercice n°5 */
float distance_au_carre(float x1, float y1, float x2, float y2)
{
    return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
}

bool est_rectangle(float xa, float ya, float xb, float yb, float xc, float yc)
{
    float ab2 = distance_au_carre(xa, ya, xb, yb);
    float ac2 = distance_au_carre(xa, ya, xc, yc);
    float bc2 = distance_au_carre(xb, yb, xc, yc);
    return (bc2 == ab2 + ac2) || (ab2 == ac2 + bc2) || (ac2 == ab2 + bc2);
}

/* Exercice n°6 */
void ligne(int n, int m)
{
    for (int i = 1; i <= n; i++)
        printf("A");
    for (int i = 1; i <= m; i++)
        printf("B");
    printf("\n");
}

void carre(int m)
{
    for (int i = 1; i <= m; i++)
        ligne(i, m - i);
}

/* Exercice n°7 */
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

/* Exercice n°8 */
bool est_premier(int n)
{
    if (n == 1)
        return false; // 1 n'est pas premier
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) // si n admet un diviseur autre que 1 et lui-même il n'est pas premier
            return false;
    return true; // sinon il est premier
}

/* Exercice n°9 */
int s1(int n)
{
    int somme = 0;
    for (int i = 1; i <= n; i++)
        somme = somme + i;
    return somme;
}

int s3(int n)
{
    int somme = 0;
    for (int i = 1; i <= n; i++)
        somme = somme + i * i * i;
    return somme;
}

/* Exercice n°10 */
long factorielle(int n)
{
    long p = 1;
    for (int i = 1; i <= n; i++)
        p *= i;
    return p;
}

int catalan(int n)
{
    return factorielle(2 * n) / (factorielle(n + 1) * factorielle(n));
}

/* Exercice n°11 */
int PGCD(int a, int b)
{
    int d1 = a, d2 = b, r = d1 % d2;
    while (r != 0)
    {
        d1 = d2;
        d2 = r;
        r = d1 % d2;
    }
    return d2;
}

int PPCM(int a, int b)
{
    return (a * b) / PGCD(a, b);
}

int main()
{
    /* Exercice n°1 */
    printf("\n** Exercice n°1 **\n******************\n");

    printf("Une personne de 80 kg mesurant 1 mètre 80 a un IMC de %f.\n", imc(80, 1.80));

    /* Exercice n°2 */
    printf("\n** Exercice n°2 **\n******************\n");

    printf("L'aire du trapèze est %f.\n", aire_trapeze(2, 4, 5));

    /* Exercice n°3 */
    printf("\n** Exercice n°3 **\n******************\n");

    printf("L'aire du triangle est %f.\n", aire_triangle(3, 4, 5));

    /* Exercice n°4 */
    printf("\n** Exercice n°4 **\n******************\n");

    printf("Si le joueur marque 12 buts, il recevra %d du club F et %d du club G.\n", F(12), G(12));

    int buts = 0, f = 0, g = 0;
    while (g >= f)
    {
        buts++;
        f = F(buts);
        g = G(buts);
    }
    printf("A partir de %d buts, la prime du club F est plus intéressante.\n", buts);

    /* Exercice n°5 */
    printf("\n** Exercice n°5 **\n******************\n");

    if (est_rectangle(5, 2, 2, 2, 2, 6))
        printf("Le triangle est rectangle\n");
    else
        printf("Le triangle n'est pas rectangle\n");

    /* Exercice n°6 */
    printf("\n** Exercice n°6 **\n******************\n");

    carre(10);

    /* Exercice n°7 */
    printf("\n** Exercice n°7 **\n******************\n");

    srand(time(NULL));
    printf("La moyenne des dés obtenue sur 10000 lancers est %f.\n", moyenneDe(10000));

    printf("On obtient le premier 6 au bout de %d lancers.\n", premier6());

    int s = 0;
    for (int i = 1; i <= 10000; i++)
        s += premier6();

    printf("Il faut en moyenne %f lancers pour obtenir un 6.\n", (float)s / 10000);

    /* Exercice n°8 */
    printf("\n** Exercice n°8 **\n******************\n");

    bool res = true;
    for (int i = 0; i <= 40; i++)
        if (!est_premier(i * i - i + 41))
        {
            res = false;
            printf("Il existe un f(n) non premier pour n entre 0 et 40 : f(%d) = %d\n", i, i * i - i + 41);
            break;
        }
    if (res)
        printf("Tous les f(n) pour n entre 0 et 40 sont premiers.\n");

    int compteur = 0;
    for (int i = 0; i <= 100; i++)
        if (!est_premier(i * i - i + 41))
            compteur++;

    printf("Il y a %d f(n) non premiers pour n inférieur à 100.\n", compteur);

    /* Exercice n°9 */
    printf("\n** Exercice n°9 **\n******************\n");

    printf("La somme des entiers de 1 à 100 est: %d\n", s1(100));
    printf("La somme des cubes des entiers de 1 à 100 est: %d\n", s3(100));

    res = false;
    for (int n = 1; n <= 1000; n++)
        if (s1(n) * s1(n) != s3(n))
        {
            res = true;
            printf("Pour n = {%d}, on a s3({%d}) != s1({%d}) ** 2\n", n, n, n);
            break;
        }
    if (!res)
        printf("Il n'y a aucun n <= 1000 pour lequel s3(n) != s1(n) ** 2\n");

    /* Exercice n°10 */
    printf("\n** Exercice n°10 **\n*******************\n");

    printf("0! = %ld\n", factorielle(0));
    printf("1! = %ld\n", factorielle(1));
    printf("4! = %ld\n", factorielle(4));
    printf("C0 = %d\n", catalan(0));
    printf("C1 = %d\n", catalan(1));
    printf("C7 = %d\n", catalan(7));

    /* Exercice n°11 */
    printf("\n** Exercice n°11 **\n*******************\n");

    printf("Le PGCD de 30 et 75 est %d\n", PGCD(30, 75));
    printf("Le PPCM de 30 et 75 est %d\n", PPCM(30, 75));

    return 0;
}