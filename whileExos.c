/* Estelle DORIOT                   */
/*  Exercices sur les boucles while */

#include <stdio.h>
#include <math.h>

int main()
{
    /* Exercice n°2 */
    printf("\n** Exercice n°2 **\n******************\n");

    int n = 10;
    while (n >= 1)
    {
        printf("%d\n", n);
        n--;
    }

    /* Exercice n°3 */
    printf("\n** Exercice n°3 **\n******************\n");

    int nombreMystere = 53, choix;
    do
    {
        printf("Saisir un entier entre 1 et 100 : ");
        scanf("%d", &choix);

        if (choix < nombreMystere)
            printf("Trop petit\n");
        else if (choix > nombreMystere)
            printf("Trop grand\n");
        else
            printf("Gagné !\n");
    } while (choix != nombreMystere); 

    int nombreMystere2 = 53, choix2, nb_essais = 0, max_essais;
    printf("Combien d'essais au maximum ? ");
    scanf("%d", &max_essais);
    do
    {
        printf("Saisir un entier entre 1 et 100 : ");
        scanf("%d", &choix2);

        if (choix2 < nombreMystere2)
            printf("Trop petit\n");
        else if (choix2 > nombreMystere2)
            printf("Trop grand\n");
        else
            printf("Gagné !\n");
        nb_essais++;
    } while (choix2 != nombreMystere2 && nb_essais < max_essais); 

    if (choix2 == nombreMystere2)
        printf("Gagné en %d !\n", nb_essais);
    else
        printf("Perdu en %d essais ! La réponse était %d.", nb_essais, nombreMystere2);

    /* Exercice n°4 */
    printf("\n** Exercice n°4 **\n******************\n");

    int mois = 0;
    double prix;
    printf("Quel est le prix initial du produit? ");
    scanf("%lf", &prix);
    while (prix <= 1000)
    {
        prix *= 1.08;
        mois++;
    }
    printf("Le prix dépasse 1000€ au bout de %d mois.\n", mois);

    /* Exercice n°5 */
    printf("\n** Exercice n°5 **\n******************\n");

    double conso_initiale = 20000000, conso = conso_initiale;
    int annee = 0;
    while (conso < conso_initiale * 2)
    {
        annee++;
        conso = conso * 1.08;
    }
    printf("Il faut %d ans pour doubler la consommation energétique.\n", annee);

    conso_initiale = 200000000;
    conso = conso_initiale;
    annee = 0;
    while (conso < conso_initiale * 2)
    {
        annee++;
        conso = conso * 1.08;
    }
    printf("Il faut %d ans pour doubler la consommation energétique.\n", annee);

    /* Exercice n°6 */
    printf("\n** Exercice n°6 **\n******************\n");

    int habitants = 40000, malades = 1, nouveaux_malades = 0, jours = 1;
    while (malades < habitants)
    {
        nouveaux_malades = malades * 2;
        malades = malades + nouveaux_malades;
        jours++;
    }
    printf("Au bout de %d jours, tout le monde est malade\n", jours);

    /* Exercice n°7 */
    printf("\n** Exercice n°7 **\n******************\n");

    double riz = 0;
    for (int i=0; i<64; i++)
        riz += pow(2, i);
    printf("Il faut au total %f grains de riz.\n", riz);

    int i = 0;
    riz = 0;
    while (riz < pow(10, 12))
    {
        riz += pow(2, i);
        i++;
    }
    printf("A partir de la case %d, il faut plus de 10**12 grains de riz\n", i);

    /* Exercice n°8 */
    printf("\n** Exercice n°8 **\n******************\n");

    printf("Donnez un entier: ");
    scanf("%d", &n);
    i = n;
    int compteur = 0, somme = 0;

    while (i > 0)
    {
        compteur++;
        somme += i % 10;
        i /= 10;
    }
        
    printf("Le nombre de chiffres de %d est %d\n", n, compteur);
    printf("La somme des chiffres de %d est %d\n", n, somme);

    return 0;
}