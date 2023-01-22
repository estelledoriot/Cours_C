/* Estelle DORIOT                 */
/*  Exercices sur les boucles for */

#include <stdio.h>
#include <math.h>

int main()
{
    /* Exercice n°2 */
    printf("\n** Exercice n°2 **\n******************\n");

    int n = 7;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
            printf("*");
        printf("\n");
    }

    n = 4;
    for (int i=0; i<n; i++)
    {
        for (int j=1; j<=n-i-1; j++)
            printf(" ");
        for (int j=1; j<=2*i+1; j++)
            printf("*");
        printf("\n");
    }

    n = 4;
    for (int j=1; j<=n-1; j++)
        printf(" ");
    printf("*\n");
    for (int i=1; i<n; i++)
    {
        for (int j=1; j<=n-i-1; j++)
            printf(" ");
        printf("*");
        for (int j=1; j<2*i; j++)
            printf(" ");
        printf("*\n");
    }

    n = 4;
    for (int i=0; i<n; i++)
    {
        for (int j=1; j<=n-i-1; j++)
            printf(" ");
        for (int j=1; j<=2*i+1; j++)
            printf("*");
        printf("\n");
    }
    for (int i=n-2; i>=0; i--)
    {
        for (int j=1; j<=n-i-1; j++)
            printf(" ");
        for (int j=1; j<=2*i+1; j++)
            printf("*");
        printf("\n");
    }

    /* Exercice n°3 */
    printf("\n** Exercice n°3 **\n******************\n");

    for (int i=1; i<=100; i++)
    {
        if (i % 15 == 0)
            printf("fizzbuzz\n");
        else if (i % 3 == 0)
            printf("fizz\n");
        else if (i % 5 == 0)
            printf("buzz\n");
        else
            printf("%d\n", i);
    }

    /* Exercice n°4 */
    printf("\n** Exercice n°4 **\n******************\n");

    int m = 4; 
    n = 3;
    for (int i=1; i<=m; i++)
        for (int j=1; j<=n; j++)
        {
            for (int k=1; k<=j; k++)
                printf("*");
            printf("\n");
        }

    /* Exercice n°5 */
    printf("\n** Exercice n°5 **\n******************\n");

    n = 4;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if ((i + j) % 2 == 0)
                printf(". ");
            else
                printf("# ");
        }
        printf("\n");
    }

    /* Exercice n°6 */
    printf("\n** Exercice n°6 **\n******************\n");

    for (int i=1; i<=10; i++)
        printf("%d x 5 = %d\n", i, i*5);
    printf("\n");

    for (int i=1; i<=10; i++)
        for (int j=1; j<=10; j++)
            printf("%d x %d = %d\n", i, j, i*j);
    printf("\n");

    printf(" X |");
    for (int i=1; i<=10; i++)
        printf(" %2d", i);
    printf("\n");
    for (int i=1; i<=34; i++)
        printf("-");
    printf("\n");

    for (int i=1; i<=10; i++)
    {
        printf("%2d |", i);
        for (int j=1; j<=10; j++)
            printf(" %2d", i*j);
        printf("\n");
    }

    /* Exercice n°7 */
    printf("\n** Exercice n°7 **\n******************\n");

    printf("Veuillez donner un nombre entier: ");
    scanf("%d", &n);

    long s = 0;
    for (int i=1; i<=n; i++)
        if (i % 2 == 1)
            s = s + i;
    printf("La somme des nombres impairs inférieurs à %d est: %ld\n", n, s);

    s = 0;
    for (int i=1; i<=n; i++)
        s = s + i * i;
    printf("La somme des carrés des nombres inférieurs à %d est: %ld\n", n, s);

    s = 1;
    for (int i=1; i<=n; i++)
        s = s * i;
    printf("Le produit des entiers inférieurs à %d est: %ld\n", n, s);

    s = 1;
    for (int i=1; i<=n; i++)
        if (i % 2 == 0)
            s = s * i;
    printf("Le produit des nombres pairs inférieurs à %d est: %ld\n", n, s);

    /* Exercice n°8 */
    printf("\n** Exercice n°8 **\n******************\n");

    printf("Veuillez donner un nombre de notes: ");
    scanf("%d", &n);
    int note;
    s = 0;
    for (int i=1; i<=n; i++)
    {
        printf("Veuillez donner une note: ");
        scanf("%d", &note);
        s = s + note;
    }
    printf("La moyenne des notes est: %f\n", (double)s/n);

    /* Exercice n°9 */
    printf("\n** Exercice n°9 **\n******************\n");

    printf("Veuillez donner un entier: ");
    scanf("%d", &n);

    printf("Les diviseurs de %d sont: \n", n);
    for (int i=1; i<=n; i++)
        if (n % i == 0)
            printf("%d\n", i);

    int compteur = 0;
    for (int i=1; i<=n; i++)
        if (n % i == 0)
            compteur += 1;
    printf("Il y a %d diviseurs de %d.\n", compteur, n);

    int somme = 0;
    for (int i=1; i<=n; i++)
        if (n % i == 0)
            somme += i;
    printf("La somme des diviseurs de %d est %d.\n", n, somme);

    /* Exercice n°10 */
    printf("\n** Exercice n°10 **\n*******************\n");

    int nombre;
    printf("Veuillez donner un nombre entre 2 et 12: ");
    scanf("%d", &nombre);
    somme = 0;

    for (int i=1; i<=6; i++)
        for (int j=1; j<=6; j++)
            if (i + j == nombre)
            {
                printf("%d + %d = %d\n", i, j, nombre);
                somme = somme + 1;
            }   
    printf("Il y a %d possibilités de faire %d avec 2 dés.\n", somme, nombre);

    printf("Veuillez donner un nombre entre 3 et 18: ");
    scanf("%d", &nombre);
    somme = 0;

    for (int i=1; i<=6; i++)
        for (int j=1; j<=6; j++)
            for (int k=1; k<=6; k++)
                if (i + j + k == nombre)
                {
                    printf("%d + %d + %d = %d\n", i, j, k, nombre);
                    somme = somme + 1;
                }   
    printf("Il y a %d possibilités de faire %d avec 3 dés.\n", somme, nombre);

    /* Exercice n°11 */
    printf("\n** Exercice n°11 **\n*******************\n");

    int total = 0;
    for (int a=0; a<=10; a++)
        for (int b=0; b<=20; b++)
            for (int c=0; c<=50; c++)
                if (a * 10 + b * 5 + c * 2 == 100)
                {
                    printf("1 euro = %d x 2c + %d x 5c + %d x 10c\n", c, b, a);
                    total += 1;
                }    
    printf("Il y a %d façons d'obtenir 1 euro avec des pièces de 2, 5 et 10 centimes.\n", total);

    /* Exercice n°12 */
    printf("\n** Exercice n°12 **\n*******************\n");

    for (int a=1; a<=100; a++)
        for (int b=1; b<=100; b++)
            for (int c=1; c<=100; c++)
                if (a * a + b * b == c * c)
                    printf("%d^2 + %d^2 = %d^2\n", a, b, c);
    printf("\n");

    for (int a=1; a<=100; a++)
        for (int b=a+1; b<=100; b++)
            for (int c=b+1; c<=100; c++)
                if (a * a + b * b == c * c)
                    printf("%d^2 + %d^2 = %d^2\n", a, b, c);

    return 0;
        
}