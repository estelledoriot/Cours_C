/* Estelle DORIOT           */
/*  Cours sur les pointeurs */

#include <stdio.h>

void ajouteDeux(int x);
void ajouteDeuxBis(int *p);
void decoupeMinutes(int *pointeurHeures, int *pointeurMinutes);

int main()
{
    int x = 5;
    printf("La valeur de la variable x est %d\n", x);
    printf("L'adresse de la variable x est %p\n", &x);

    int age = 10;
    int *pointeurAge;
    pointeurAge = &age;

    printf("Valeur de age: %d\n", *pointeurAge);

    int *p = NULL;

    int a = 10;
    ajouteDeux(a);
    printf("a = %d\n", a);

    ajouteDeuxBis(&a);
    printf("a = %d\n", a);

    int heures = 0, minutes = 90;
    decoupeMinutes(&heures, &minutes);
    printf("%d heures et %d minutes\n", heures, minutes);

    return 0;
}

void ajouteDeux(int x)
{
    x += 2;
}

void ajouteDeuxBis(int *p)
{
    *p += 2;
}

void decoupeMinutes(int *pointeurHeures, int *pointeurMinutes)
{
    *pointeurHeures += *pointeurMinutes / 60;
    *pointeurMinutes %= 60;
}