/* Estelle DORIOT                        */
/*  Cours sur les structures de controle */

#include <stdio.h>

int main()
{
    // if ...
    int age;
    printf("Quel est votre age: ");
    scanf("%d", &age);
    if (age >= 16)
        printf("OK, vous pouvez voir ce film\n");
    if (age < 16)
        printf("Désolé, vous êtes trop jeune pour voir ce film\n");

    // if ... else ...
    int age2;
    printf("Quel est votre age: ");
    scanf("%d", &age2);
    if (age2 >= 16)
        printf("OK, vous pouvez voir ce film\n");
    else
        printf("Désolé, vous êtes trop jeune pour voir ce film\n");

    // opérateurs booléens
    float c1, c2, c3;
    printf("Donnez les longueurs des trois côtés: ");
    scanf("%f %f %f", &c1, &c2, &c3);
    if ((c1 <= c2 + c3) && (c2 <= c1 + c3) && (c3 <= c1 + c2))
        printf("C'est un triangle !\n");
    else
        printf("Ce n'est pas un triangle.\n");

    // structures conditionnelles imbriquées
    float temperature;
    printf("Quelle est la température (degrés): ");
    scanf("%f", &temperature);
    if (temperature <= 0)
    {
        printf("Température négative ou nulle: risque de gel\n");
        if (temperature < -10)
            printf("Oh là là, c'est le pôle nord ici !\n");
    }
    else
    {
        printf("Température positive\n");
        if (temperature >= 25)
            printf("Sortez les t-shirts !\n");
        else if (temperature > 18)
            printf("Il fait encore un peu frisquet.\n");
        else
            printf("Mais garde ton manteau...\n");
    }

    // switch
    int dessert;
    printf("Veuillez choisir votre plat. Tapez: \n1 pour le gateau au chocolat \n2 pour la glace \n3 pour la tarte tatin \nVotre choix: ");
    scanf("%d", &dessert);
    switch (dessert)
    {
        case 1:
            printf("Vous avez choisi le gateau au chocolat\n");
            break;
        case 2:
            printf("Vous avez choisi la glace\n");
            break;
        case 3:
            printf("Vous avez choisi la tarte tatin\n");
            break;
        default:
            printf("Ce choix n'est pas disponible\n");
            break;
    }

    // boucle while
    int i = 1;
    while (i <= 10)
    {
        printf("Bonjour\n");
        i = i + 1;
    }

    // boucle infinie
    /*
    int n = 1;
    printf("début\n");

    while (n > 0)
    {
        if (n % 2 == 1)
            printf("tic\n");
        else
            printf("tac\n");
        n = n + 1;
    }
    printf("fin\n");
    */

    // boucle for simple
    for (int i = 1; i <= 5; i++)
        printf("%d\n", i);

    // for et while
    int somme = 0;
    for (int i = 100; i <= 200; i++)
        somme = somme + i;
    printf("La somme est %d\n", somme);

    int somme2 = 0;
    int i = 100;
    while (i <= 200)
    {
        somme2 = somme2 + i;
        i = i + 1;
    }    
    printf("La somme est %d\n", somme2);

    // compteur
    int c = 0;
    for (int j = 1; j <= 50; j++)
    {
        if (j % 3 == 0)
            c = c + 1;
    }
    printf("Il y a %d nombres divisibles par 3 inférieurs à 50.\n", c);

    // accumulateur
    int s = 0;
    for (int k = 1; k <= 50; k++)
        s = s + k;
    printf("Somme des nombres inférieurs à 7: %d\n", s);

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

    return 0;
}