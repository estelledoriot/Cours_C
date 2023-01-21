/* Estelle DORIOT                                */
/*  Exercices sur les structures conditionnelles */

#include <stdio.h>

int main()
{
    /* Exercice n°1 */
    printf("\n** Exercice n°1 **\n******************\n");

    int masse;
    printf("Masse du poteau: ");
    scanf("%d", &masse);
    int poteaux;
    printf("Nombre de poteaux: ");
    scanf("%d", &poteaux);

    if (masse * poteaux > 1800)
        printf("Risque de surcharge !\n");

    /* Exercice n°2 */
    printf("\n** Exercice n°2 **\n******************\n");

    int nombre;
    printf("Donnez un nombre: ");
    scanf("%d", &nombre);
    if (nombre >= 0)
        printf("%d\n", nombre);
    else
        printf("%d\n", -nombre);

    /* Exercice n°3 */
    printf("\n** Exercice n°3 **\n******************\n");

    int nombre1, nombre2;
    printf("Donnez un nombre: ");
    scanf("%d", &nombre1);
    printf("Donnez un autre nombre: ");
    scanf("%d", &nombre2);

    if (nombre1 >= nombre2)
        printf("%d\n", nombre1);
    else
        printf("%d\n", nombre2);

    /* Exercice n°4 */
    printf("\n** Exercice n°4 **\n******************\n");

    int nb1, nb2, nb3;
    printf("Donnez un nombre: ");
    scanf("%d", &nb1);
    printf("Donnez un autre nombre: ");
    scanf("%d", &nb2);
    printf("Donnez un troisième nombre: ");
    scanf("%d", &nb3);

    if (nb1 >= nb2 && nb1 >= nb3)
        printf("%d\n", nb1);
    else if (nb2 >= nb1 && nb2 >= nb3)
        printf("%d\n", nb2);
    else
        printf("%d\n", nb3);

    /* Exercice n°5 */
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

    /* Exercice n°6 */
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

    /* Exercice n°7 */
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

    /* Exercice n°8 */
    printf("\n** Exercice n°8 **\n******************\n");

    int a, b, c;
    printf("Donnez trois entiers :");
    scanf("%d %d %d", &a, &b, &c);

    if ((a == b) || (a == c))
        printf("%d\n", a);
    else if (b == c)
        printf("%d\n", b);

    /* Exercice n°9 */
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

    /* Exercice n°10 */
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

    /* Exercice n°11 */
    printf("\n** Exercice n°11 **\n*******************\n");

    int annee;
    printf("Donnez une année: ");
    scanf("%d", &annee);

    if ((annee % 400 == 0) || ((annee % 4 == 0) && (annee % 100 != 0)))
        printf("%d est bissextile\n", annee);
    else
        printf("%d n'est pas bissextile\n", annee);

    /* Exercice n°12 */
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

    /* Exercice n°13 */
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

    /* Exercice n°14 */
    printf("\n** Exercice n°14 **\n*******************\n");

    int somme_a_rendre;
    printf("Quelle somme doit-on rendre ? ");
    scanf("%d", &somme_a_rendre);

    if (somme_a_rendre >= 200)
    {
        printf("Il faut rendre %d billets de 200€\n", somme_a_rendre/200);
        somme_a_rendre = somme_a_rendre % 200;
    }
    if (somme_a_rendre >= 100)
    {
        printf("Il faut rendre %d billets de 100€\n", somme_a_rendre/100);
        somme_a_rendre = somme_a_rendre % 100;
    }
    if (somme_a_rendre >= 50)
    {
        printf("Il faut rendre %d billets de 50€\n", somme_a_rendre/50);
        somme_a_rendre = somme_a_rendre % 50;
    }
    if (somme_a_rendre >= 20)
    {
        printf("Il faut rendre %d billets de 20€\n", somme_a_rendre/20);
        somme_a_rendre = somme_a_rendre % 20;
    }
    if (somme_a_rendre >= 10)
    {
        printf("Il faut rendre %d billets de 10€\n", somme_a_rendre/10);
        somme_a_rendre = somme_a_rendre % 10;
    }

    return 0;
}