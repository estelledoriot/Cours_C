/* Estelle DORIOT                            */
/*  Cours sur les structures conditionnelles */

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

    // if ... else if ... else ...
    int age3;
    printf("Quel est votre age: ");
    scanf("%d", &age3);
    if (age3 >= 16)
        printf("OK, vous pouvez voir ce film\n");
    else if (age3 >= 14)
        printf("Patience, tu as presque l'age requis\n");
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
    int jour;
    printf("Donnez le numéro du jour de la semaine: ");
    scanf("%d", &jour);
    switch (jour)
    {
        case 1:
            printf("Lundi\n");
            break;
        case 2:
            printf("Mardi\n");
            break;
        case 3:
            printf("Mercredi\n");
            break;
        case 4:
            printf("Jeudi\n");
            break;
        case 5:
            printf("Vendredi\n");
            break;
        case 6:
            printf("Samedi\n");
            break;
        case 7:
            printf("Dimanche\n");
            break;
        default:
            printf("??");
            break;
    }

    return 0;
}