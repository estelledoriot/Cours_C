/* Estelle DORIOT           */
/*  Cours sur les variables */

#include <stdio.h> 
#include <stdbool.h>

int main()
{
    // tailles des types entiers
    printf("Taille du type short: %lu octets\n", sizeof(short));
    printf("Taille du type int: %lu octets\n", sizeof(int));
    printf("Taille du type long: %lu octets\n", sizeof(long));

    // taille des types flottants
    printf("Taille du type float: %lu octets\n", sizeof(float));
    printf("Taille du type double: %lu octets\n", sizeof(double));
    printf("Taille du type long double: %lu octets\n", sizeof(long double));
    
    // booléens
    bool y = true;
    bool z = false;
    printf("y = %d\n", y);
    printf("z = %d\n", z);

    // operateurs arithmetiques
    printf("5 + 3 = %d -> resultat entier\n", 5 + 3); // addition de deux entiers
    printf("5.0 + 3 = %f -> resultat flottant\n", 5.0 + 3); // addition d'un entier et d'un flottant
    printf("5 / 3 = %d -> resultat entier\n", 5 / 3); // division de deux entiers (! division euclidienne)
    printf("5.0 / 3.0 = %f -> resultat flottant\n", 5.0 / 3.0); // division de deux flottants
    printf("5 %% 3 = %d -> resultat entier\n", 5 % 3); // operateur modulo

    // operateurs de comparaison
    printf("%d\n", 3 < 9.5); // on peut comparer un entier et un flottant
    printf("%d\n", 'b' < 'f'); // les caractères sont comparés avec l'ordre alphabétique

    // operateurs booleens
    printf("%d\n", (3 == 3) || (9 > 24));
    printf("%d\n", (9 > 24) && (3 == 3));

    // cast
    int n = 5;
    printf("Conversion de n: %f\n", (double) n);

    // printf
    printf("Bonjour\n");
    char nom[10] = "John";
    int age = 30;
    printf("%s a %d ans\n", nom, age);

    // scanf
    char nom2[256];
    int age2;
    printf("Entrez votre nom : ");
    scanf("%s", nom2);
    printf("Bonjour %s\n", nom2);
    printf("Entrez votre age : ");
    scanf("%d", &age2);
    printf("Vous avez %d ans de différence avec le Pere Noel\n", 77 - age2);

    int a;
    int b;
    char s[20];
    printf("Donnez deux nombres puis votre prenom: \n");
    scanf("%d %d %s", &a, &b, s);
    printf("a = %d, b = %d, votre nom est: %s\n", a, b, s);

    return 0;
}
