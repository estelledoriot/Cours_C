#include <stdio.h>

int main()
{
    // boucle while
    int i = 1;
    while (i <= 10)
    {
        printf("Bonjour\n");
        i = i + 1;
    }

    // compteur
    int c = 0;
    int j = 1;
    while (j <= 50)
    {
        if (j % 3 == 0)
            c = c + 1;
        j = j + 1;
    }
    printf("Il y a %d nombres divisibles par 3 inférieurs à 50.\n", c);

    // accumulateur
    int s = 0;
    int k = 1;
    while (k <= 7)
    {
        s = s + k;
        k = k + 1;
    }
    printf("Somme des nombres inférieurs à 7: %d\n", s);

    // variables
    double population = 7577000000;
    int annee = 2018;

    while (population < 10000000000)
    {
        annee = annee + 1;
        population = population * 1.012;
    }
    printf("La population sera de %f en %d.\n", population, annee);

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

    // do ... while
    int mdp = 123456;
    int essai = 0;
    do
    {
        printf("Veuillez entrer le mot de passe: ");
        scanf("%d", &essai);
    } while (essai != mdp);

    return 0;
}