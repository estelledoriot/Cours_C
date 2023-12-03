/* Estelle DORIOT                                */
/*  Exercices sur les structures conditionnelles */

#include <stdio.h>
#include <math.h>

int main()
{
    // Exercice n°1
    printf("\n** Exercice n°1 **\n******************\n");

    int masse;
    printf("Masse du poteau: ");
    scanf("%d", &masse);
    int poteaux;
    printf("Nombre de poteaux: ");
    scanf("%d", &poteaux);

    if (masse * poteaux > 1800)
        printf("Risque de surcharge !\n");

    // Exercice n°2
    printf("\n** Exercice n°2 **\n******************\n");

    int nombre;
    printf("Donnez un nombre: ");
    scanf("%d", &nombre);
    if (nombre >= 0)
        printf("La valeur absolue est %d\n", nombre);
    else
        printf("La valeur absolue est %d\n", -nombre);

    // Exercice n°3
    printf("\n** Exercice n°3 **\n******************\n");

    int nombre1, nombre2;
    printf("Donnez un nombre: ");
    scanf("%d", &nombre1);
    printf("Donnez un autre nombre: ");
    scanf("%d", &nombre2);

    if (nombre1 >= nombre2)
        printf("Le maximum est %d\n", nombre1);
    else
        printf("Le maximum est %d\n", nombre2);

    // Exercice n°4
    printf("\n** Exercice n°4 **\n******************\n");

    int nb1, nb2, nb3;
    printf("Donnez un nombre: ");
    scanf("%d", &nb1);
    printf("Donnez un autre nombre: ");
    scanf("%d", &nb2);
    printf("Donnez un troisième nombre: ");
    scanf("%d", &nb3);

    if (nb1 >= nb2 && nb1 >= nb3)
        printf("Le maximum est %d\n", nb1);
    else if (nb2 >= nb1 && nb2 >= nb3)
        printf("Le maximum est %d\n", nb2);
    else
        printf("Le maximum est %d\n", nb3);

    // Exercice n°5
    printf("\n** Exercice n°5 **\n******************\n");

    int temperature;
    printf("Saisir une température en °C : ");
    scanf("%d", &temperature);

    if (temperature >= 100)
        printf("L'eau est à l'état de gaz\n");
    else if (temperature >= 0)
        printf("L'eau est à l'état liquide\n");
    else
        printf("L'eau est à l'état solide\n");

    // Exercice n°6
    printf("\n** Exercice n°6 **\n******************\n");

    int age;
    printf("Quel est l'âge de votre enfant: ");
    scanf("%d", &age);

    if (6 <= age && age <= 7)
        printf("poussin\n");
    else if (8 <= age && age <= 9)
        printf("pupille\n");
    else if (10 <= age && age <= 11)
        printf("minime\n");
    else if (12 <= age && age <= 14)
        printf("cadet\n");
    else
        printf("Désolé, ce club ne s'adresse pas aux enfants de plus de 14 ans\n");

    // Exercice n°7
    printf("\n** Exercice n°7 **\n******************\n");

    double moyenne;
    printf("Quelle est votre moyenne ? ");
    scanf("%lf", &moyenne);

    if (moyenne < 8)
        printf("Refusé\n");
    else if (moyenne < 10)
        printf("Admis au second groupe\n");
    else if (moyenne < 12)
        printf("Admis\n");
    else if (moyenne < 14)
        printf("Admis mention assez bien\n");
    else if (moyenne < 16)
        printf("Admis mention bien\n");
    else
        printf("Admis mention très bien\n");

    // Exercice n°8
    printf("\n** Exercice n°8 **\n******************\n");

    int a, b, c;
    printf("Donnez trois entiers : ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a == b) || (a == c))
        printf("%d\n", a);
    else if (b == c)
        printf("%d\n", b);

    // Exercice n°9
    printf("\n** Exercice n°9 **\n******************\n");

    int age_client, trois_d;

    printf("Quel est votre age ? ");
    scanf("%d", &age_client);
    printf("Votre film est-il en 3D (1 pour oui, 0 pour non) ? ");
    scanf("%d", &trois_d);

    double prix_enfant = 5.60, prix_reduit = 7.80, prix_plein = 13.00;
    double sup_3D = 2.00, prix;

    if (age_client <= 14)
        prix = prix_enfant;
    else if (age <= 26 || age >= 65)
        prix = prix_reduit;
    else
        prix = prix_plein;

    if (trois_d)
        prix = prix + sup_3D;

    printf("Il faut payer %f.\n", prix);

    // Exercice n°10
    printf("\n** Exercice n°10 **\n*******************\n");

    int entier;
    printf("Donnez un entier: ");
    scanf("%d", &entier);

    if (entier % 5 == 0)
        printf("%d est un multiple de 5.\n", entier);
    else
        printf("%d n'est pas un multiple de 5.\n", entier);

    printf("Donnez un entier: ");
    scanf("%d", &entier);

    if (entier % 2 == 0)
        printf("%d est un nombre pair.\n", entier);
    else
        printf("%d est un nombre impair.\n", entier);

    // Exercice n°11
    printf("\n** Exercice n°11 **\n*******************\n");

    int annee;
    printf("Donnez une année: ");
    scanf("%d", &annee);

    if ((annee % 400 == 0) || ((annee % 4 == 0) && (annee % 100 != 0)))
        printf("%d est bissextile\n", annee);
    else
        printf("%d n'est pas bissextile\n", annee);

    // Exercice n°12
    printf("\n** Exercice n°12 **\n*******************\n");

    int heures = 10, minutes = 20;

    if (minutes == 59)
    {
        minutes = 0;
        if (heures == 23)
            heures = 0;
        else
            heures = heures + 1;
    }
    else
        minutes = minutes + 1;

    printf("Il est maintenant %d heure et %2d minutes\n", heures, minutes);

    // Exercice n°13
    printf("\n** Exercice n°13 **\n*******************\n");

    printf("Longueur du premier côté: ");
    scanf("%d", &a);
    printf("Longueur du deuxème côté: ");
    scanf("%d", &b);
    printf("Longueur du troisième côté: ");
    scanf("%d", &c);

    if (a * a == b * b + c * c)
    {
        if (b == c)
            printf("Le triangle est isocèle rectangle.\n");
        else
            printf("Le triangle est rectangle\n");
    }
    else if (b * b == a * a + c * c)
    {
        if (a == c)
            printf("Le triagnle est isocèle rectangle\n");
        else
            printf("Le triangle est rectangle\n");
    }
    else if (c * c == a * a + b * b)
    {
        if (a == b)
            printf("Le triagnle est isocèle rectangle\n");
        else
            printf("Le triangle est rectangle\n");
    }
    else if (a == b && b == c)
        printf("Le triangle est équilatéral\n");
    else if (a == b || a == c || b == c)
        printf("Le triangle est isocèle\n");
    else
        printf("Le triangle est quelconque\n");

    // Exercice n°14
    printf("\n** Exercice n°14 **\n*******************\n");

    int somme_a_rendre;
    printf("Quelle somme doit-on rendre ? ");
    scanf("%d", &somme_a_rendre);

    if (somme_a_rendre >= 200)
    {
        printf("Il faut rendre %d billets de 200€\n", somme_a_rendre / 200);
        somme_a_rendre = somme_a_rendre % 200;
    }
    if (somme_a_rendre >= 100)
    {
        printf("Il faut rendre %d billets de 100€\n", somme_a_rendre / 100);
        somme_a_rendre = somme_a_rendre % 100;
    }
    if (somme_a_rendre >= 50)
    {
        printf("Il faut rendre %d billets de 50€\n", somme_a_rendre / 50);
        somme_a_rendre = somme_a_rendre % 50;
    }
    if (somme_a_rendre >= 20)
    {
        printf("Il faut rendre %d billets de 20€\n", somme_a_rendre / 20);
        somme_a_rendre = somme_a_rendre % 20;
    }
    if (somme_a_rendre >= 10)
    {
        printf("Il faut rendre %d billets de 10€\n", somme_a_rendre / 10);
        somme_a_rendre = somme_a_rendre % 10;
    }

    // Exercice n°15
    printf("\n** Exercice n°15 **\n*******************\n");

    double coeff_a, coeff_b, coeff_c;
    printf("Veuillez donner le coefficient a: ");
    scanf("%lf", &coeff_a);
    printf("Veuillez donner le coefficient b: ");
    scanf("%lf", &coeff_b);
    printf("Veuillez donner le coefficient c: ");
    scanf("%lf", &coeff_c);

    double delta = coeff_b * coeff_b - 4 * coeff_a * coeff_c;

    if (delta == 0)
        printf("Il y a une seule solution: %f\n", -coeff_b / (2 * coeff_a));
    else if (delta > 0)
        printf("Il y a deux solutions réelles: %f et %f\n", (-coeff_b + sqrt(delta)) / (2 * coeff_a), (-coeff_b - sqrt(delta)) / (2 * coeff_a));
    else
        printf("Il n'y a pas de solution réelle.\n");

    // Exercice n°16
    printf("\n** Exercice n°16 **\n*******************\n");

    printf("Donnez l'heure de début de la location (un entier) : ");
    int debut;
    scanf("%d", &debut);

    printf("Donnez l'heure de fin de la location (un entier) : ");
    int fin;
    scanf("%d", &fin);

    if (debut < 0 || debut > 24 || fin < 0 || fin > 24)
        printf("Les heures doivent être comprises entre 0 et 24 !\n");
    else if (debut == fin)
        printf("Bizarre, vous n'avez pas loué votre vélo bien longtemps !\n");
    else if (debut > fin)
        printf("Bizarre, le début de la location est après la fin ...\n");
    else
    {
        int tarif_nuit = 1;
        int tarif_jour = 2;

        int duree_location_nuit = 0;
        int duree_location_jour = 0;
        if (debut < 7)
        {
            if (fin < 7)
                duree_location_nuit = fin - debut;
            else if (fin < 17)
            {
                duree_location_nuit = 7 - debut;
                duree_location_jour = fin - 7;
            }
            else
            {
                duree_location_nuit = fin - 17 + 7 - debut;
                duree_location_jour = 17 - 7;
            }
        }
        else if (debut < 17)
        {
            if (fin < 17)
                duree_location_jour = fin - debut;
            else
            {
                duree_location_jour = 17 - debut;
                duree_location_nuit = fin - 17;
            }
        }
        else
        {
            duree_location_nuit = fin - debut;
        }

        int total = tarif_nuit * duree_location_nuit + tarif_jour * duree_location_jour;

        printf("Vous avez loué votre vélo pendant\n");

        if (duree_location_nuit > 0)
            printf("%d heure(s) au tarif horaire de %d euro(s)\n", duree_location_nuit, tarif_nuit);

        if (duree_location_jour > 0)
            printf("%d heure(s) au tarif horaire de %d euro(s)\n", duree_location_jour, tarif_jour);

        printf("Le montant total à payer est de %d euro(s).\n", total);
    }

    // Exercice n°18
    printf("\n** Exercice n°18 **\n*******************\n");

    int n = 7;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i - 1; j++)
            printf(" ");
        for (int j = 1; j <= 2 * i + 1; j++)
            printf("*");
        printf("\n");
    }

    n = 4;
    for (int j = 1; j <= n - 1; j++)
        printf(" ");
    printf("*\n");
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n - i - 1; j++)
            printf(" ");
        printf("*");
        for (int j = 1; j < 2 * i; j++)
            printf(" ");
        printf("*\n");
    }

    n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i - 1; j++)
            printf(" ");
        for (int j = 1; j <= 2 * i + 1; j++)
            printf("*");
        printf("\n");
    }
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 1; j <= n - i - 1; j++)
            printf(" ");
        for (int j = 1; j <= 2 * i + 1; j++)
            printf("*");
        printf("\n");
    }

    // Exercice n°19
    printf("\n** Exercice n°19 **\n*******************\n");

    for (int i = 1; i <= 100; i++)
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

    // Exercice n°20
    printf("\n** Exercice n°20 **\n*******************\n");

    int m = 4;
    n = 3;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= j; k++)
                printf("*");
            printf("\n");
        }

    // Exercice n°21
    printf("\n** Exercice n°21 **\n*******************\n");

    n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j) % 2 == 0)
                printf(". ");
            else
                printf("# ");
        }
        printf("\n");
    }

    // Exercice n°22
    printf("\n** Exercice n°22 **\n*******************\n");

    for (int i = 1; i <= 10; i++)
        printf("%d x 5 = %d\n", i, i * 5);
    printf("\n");

    for (int i = 1; i <= 10; i++)
        for (int j = 1; j <= 10; j++)
            printf("%d x %d = %d\n", i, j, i * j);
    printf("\n");

    printf(" X |");
    for (int i = 1; i <= 10; i++)
        printf(" %2d", i);
    printf("\n");
    for (int i = 1; i <= 34; i++)
        printf("-");
    printf("\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("%2d |", i);
        for (int j = 1; j <= 10; j++)
            printf(" %2d", i * j);
        printf("\n");
    }

    // Exercice n°23
    printf("\n** Exercice n°23 **\n*******************\n");

    printf("Veuillez donner un nombre entier: ");
    scanf("%d", &n);

    long s = 0;
    for (int i = 1; i <= n; i++)
        if (i % 2 == 1)
            s = s + i;
    printf("La somme des nombres impairs inférieurs à %d est: %ld\n", n, s);

    s = 0;
    for (int i = 1; i <= n; i++)
        s = s + i * i;
    printf("La somme des carrés des nombres inférieurs à %d est: %ld\n", n, s);

    s = 1;
    for (int i = 1; i <= n; i++)
        s = s * i;
    printf("Le produit des entiers inférieurs à %d est: %ld\n", n, s);

    s = 1;
    for (int i = 1; i <= n; i++)
        if (i % 2 == 0)
            s = s * i;
    printf("Le produit des nombres pairs inférieurs à %d est: %ld\n", n, s);

    // Exercice n°24
    printf("\n** Exercice n°24 **\n*******************\n");

    printf("Veuillez donner un nombre de notes: ");
    scanf("%d", &n);
    int note;
    s = 0;
    for (int i = 1; i <= n; i++)
    {
        printf("Veuillez donner une note: ");
        scanf("%d", &note);
        s = s + note;
    }
    printf("La moyenne des notes est: %f\n", (double)s / n);

    // Exercice n°25
    printf("\n** Exercice n°25 **\n*******************\n");

    printf("Veuillez donner un entier: ");
    scanf("%d", &n);

    printf("Les diviseurs de %d sont: \n", n);
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            printf("%d\n", i);

    int compteur = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            compteur += 1;
    printf("Il y a %d diviseurs de %d.\n", compteur, n);

    int somme = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            somme += i;
    printf("La somme des diviseurs de %d est %d.\n", n, somme);

    // Exercice n°26
    printf("\n** Exercice n°26 **\n*******************\n");

    int nombre4;
    printf("Veuillez donner un nombre entre 2 et 12: ");
    scanf("%d", &nombre4);
    somme = 0;

    for (int i = 1; i <= 6; i++)
        for (int j = 1; j <= 6; j++)
            if (i + j == nombre4)
            {
                printf("%d + %d = %d\n", i, j, nombre4);
                somme = somme + 1;
            }
    printf("Il y a %d possibilités de faire %d avec 2 dés.\n", somme, nombre4);

    printf("Veuillez donner un nombre entre 3 et 18: ");
    scanf("%d", &nombre4);
    somme = 0;

    for (int i = 1; i <= 6; i++)
        for (int j = 1; j <= 6; j++)
            for (int k = 1; k <= 6; k++)
                if (i + j + k == nombre4)
                {
                    printf("%d + %d + %d = %d\n", i, j, k, nombre4);
                    somme = somme + 1;
                }
    printf("Il y a %d possibilités de faire %d avec 3 dés.\n", somme, nombre4);

    // Exercice n°27
    printf("\n** Exercice n°27 **\n*******************\n");

    int total = 0;
    for (int a = 0; a <= 10; a++)
        for (int b = 0; b <= 20; b++)
            for (int c = 0; c <= 50; c++)
                if (a * 10 + b * 5 + c * 2 == 100)
                {
                    printf("1 euro = %d x 2c + %d x 5c + %d x 10c\n", c, b, a);
                    total += 1;
                }
    printf("Il y a %d façons d'obtenir 1 euro avec des pièces de 2, 5 et 10 centimes.\n", total);

    // Exercice n°28
    printf("\n** Exercice n°28 **\n*******************\n");

    for (int a = 1; a <= 100; a++)
        for (int b = 1; b <= 100; b++)
            for (int c = 1; c <= 100; c++)
                if (a * a + b * b == c * c)
                    printf("%d^2 + %d^2 = %d^2\n", a, b, c);
    printf("\n");

    for (int a = 1; a <= 100; a++)
        for (int b = a + 1; b <= 100; b++)
            for (int c = b + 1; c <= 100; c++)
                if (a * a + b * b == c * c)
                    printf("%d^2 + %d^2 = %d^2\n", a, b, c);

    // Exercice n°29
    printf("\n** Exercice n°29 **\n*******************\n");

    int points = 1, etape;
    printf("Veuillez donner un nombre entier: ");
    scanf("%d", &etape);

    for (int i = 1; i <= etape; i++)
        points += 5 * i;

    printf("Un pentagone de taille %d a %d points.\n", etape, points);

    // Exercice n°30
    printf("\n** Exercice n°30 **\n*******************\n");

    int w = 10;
    while (w >= 1)
    {
        printf("%d\n", w);
        w--;
    }

    // Exercice n°31
    printf("\n** Exercice n°31 **\n*******************\n");

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

    // Exercice n°32
    printf("\n** Exercice n°32 **\n*******************\n");

    int mois = 0;
    double prix2;
    printf("Quel est le prix initial du produit? ");
    scanf("%lf", &prix2);
    while (prix2 <= 1000)
    {
        prix2 *= 1.08;
        mois++;
    }
    printf("Le prix dépasse 1000€ au bout de %d mois.\n", mois);

    // Exercice n°33
    printf("\n** Exercice n°33 **\n*******************\n");

    double conso_initiale = 20000000, conso = conso_initiale;
    int annee2 = 0;
    while (conso < conso_initiale * 2)
    {
        annee2++;
        conso = conso * 1.08;
    }
    printf("Il faut %d ans pour doubler la consommation energétique.\n", annee2);

    conso_initiale = 200000000;
    conso = conso_initiale;
    annee2 = 0;
    while (conso < conso_initiale * 2)
    {
        annee2++;
        conso = conso * 1.08;
    }
    printf("Il faut %d ans pour doubler la consommation energétique.\n", annee2);

    // Exercice n°34
    printf("\n** Exercice n°34 **\n*******************\n");

    int habitants = 40000, malades = 1, nouveaux_malades = 0, jours = 1;
    while (malades < habitants)
    {
        nouveaux_malades = malades * 2;
        malades = malades + nouveaux_malades;
        jours++;
    }
    printf("Au bout de %d jours, tout le monde est malade\n", jours);

    // Exercice n°35
    printf("\n** Exercice n°35 **\n*******************\n");

    double riz = 0;
    for (int i = 0; i < 64; i++)
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

    // Exercice n°36
    printf("\n** Exercice n°36 **\n*******************\n");

    printf("Donnez un entier: ");
    scanf("%d", &n);
    i = n;
    int cpt = 0, somme2 = 0;

    while (i > 0)
    {
        cpt++;
        somme2 += i % 10;
        i /= 10;
    }

    printf("Le nombre de chiffres de %d est %d\n", n, cpt);
    printf("La somme des chiffres de %d est %d\n", n, somme2);

    // Exercice n°37
    printf("\n** Exercice n°37 **\n*******************\n");

    const double g = 9.81;

    double h;
    do
    {
        printf("Veuillez donner la hauteur initiale : ");
        scanf("%lf", &h);
        if (h <= 0)
            printf("Veuillez donner une valeur strictement positive.\n");
    } while (h <= 0);

    double eps;
    do
    {
        printf("Veuillez donner le coefficient de rebond : ");
        scanf("%lf", &eps);
        if (eps < 0 || eps >= 1)
            printf("Veuillez donner une valeur entre 0 (inclus) et 1 (exclus).\n");
    } while (eps < 0 || eps >= 1);

    int nbr;
    do
    {
        printf("Veuillez donner un nombre de rebonds : ");
        scanf("%d", &nbr);
        if (nbr < 0)
            printf("Veuillez donner une valeur positive.\n");
    } while (nbr < 0);

    double v1;
    for (int i = 1; i <= nbr; i++)
    {
        v1 = eps * sqrt(2 * h * g);
        h = (v1 * v1) / (2 * g);
    }

    printf("La hauteur du %d-ième rebond est: %f\n", nbr, h);

    do
    {
        printf("Veuillez donner la hauteur initiale : ");
        scanf("%lf", &h);
        if (h <= 0)
            printf("Veuillez donner une valeur strictement positive.\n");
    } while (h <= 0);

    do
    {
        printf("Veuillez donner le coefficient de rebond : ");
        scanf("%lf", &eps);
        if (eps < 0 || eps >= 1)
            printf("Veuillez donner une valeur entre 0 (inclus) et 1 (exclus).\n");
    } while (eps < 0 || eps >= 1);

    double h_fin;
    do
    {
        printf("Veuillez donner une hauteur de fin : ");
        scanf("%lf", &h_fin);
        if (h_fin <= 0 || h_fin >= h)
            printf("Veuillez donner une valeur entre 0 et h.\n");
    } while (h_fin <= 0 || h_fin >= h);

    int nb_rebonds = 0;
    while (h > h_fin)
    {
        v1 = eps * sqrt(2 * h * g);
        h = (v1 * v1) / (2 * g);
        nb_rebonds++;
    }

    printf("La hauteur atteint %f après %d rebonds.\n", h_fin, nb_rebonds);

    // Exercice n°38
    printf("\n** Exercice n°38 **\n*******************\n");

    // Paramètres
    double taux_croissance_lapins = 0.3;
    double taux_attaque = 0.01;
    double taux_croissance_renards = 0.008;
    double taux_mortalite = 0.1;
    int duree = 50;

    double renards_i = 0.0;
    double lapins_i = 0.0;

    do
    {
        printf("Combien de renards au départ (>= 2) ? ");
        scanf("%lf", &renards_i);
    } while (renards_i < 2);

    do
    {
        printf("Combien de lapins au départ  (>= 5) ? ");
        scanf("%lf", &lapins_i);
    } while (lapins_i < 5);

    double nb_renards = renards_i;
    double nb_lapins = lapins_i;
    for (int i = 1; i <= duree; i++)
    {
        double renards_prec = nb_renards;
        double lapins_prec = nb_lapins;
        nb_lapins *= (1.0 + taux_croissance_lapins - taux_attaque * renards_prec);
        if (nb_lapins == 0)
            nb_lapins = 0.0;
        nb_renards *= (1.0 + taux_attaque * lapins_prec * taux_croissance_renards - taux_mortalite);
        if (nb_renards == 0)
            nb_renards = 0.0;
        printf("Après %d mois, il y a %f lapins et %f renards\n", i, nb_lapins, nb_renards);
    }

    return 0;
}