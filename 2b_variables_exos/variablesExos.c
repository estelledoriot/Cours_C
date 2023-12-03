// Estelle DORIOT               */
//  Exercices sur les variables */

#include <stdio.h>
#define PI 3.14159

int main()
{
    // Exercice n°2
    printf("\n** Exercice n°2 **\n******************\n");

    int a = 10;
    printf("a = %d\n", a);
    a = a + 1;
    printf("Incrémentation de a: %d\n", a);
    a = a - 1;
    printf("Décrémentation de a: %d\n", a);
    a = a * 2;
    printf("Doublement de a: %d\n", a);

    // Exercice n°3
    printf("\n** Exercice n°3 **\n******************\n");

    int c = 5;
    c = c + 1;
    int b = c;
    b = b * 2 - c;
    printf("b = %d\n", b);

    int d = 5;
    int e = 6;
    d = d - e;
    e = e + d;
    d = e - d;
    printf("d = %d, e = %d\n", d, e);

    // Exercice n°4
    printf("\n** Exercice n°4 **\n******************\n");

    double rayon;
    printf("Veuillez donner la valeur du rayon : ");
    scanf("%lf", &rayon);
    double perimetre = 2 * PI * rayon;
    double aire = PI * rayon * rayon;
    printf("Le périmètre du cercle est: %f et son aire est: %f\n", perimetre, aire);

    // Exercice n°5
    printf("\n** Exercice n°5 **\n******************\n");

    printf("147/19 = %d\n", 147 / 19);
    printf("147%%19 = %d\n", 147 % 19);

    // Exercice n°6
    printf("\n** Exercice n°6 **\n******************\n");

    int secondes = 0;
    printf("Veuillez donner un nombre de secondes: ");
    scanf("%d", &secondes);
    int heures = secondes / 3600;
    secondes = secondes % 3600;
    int minutes = secondes / 60;
    secondes = secondes % 60;
    printf("%d/%d/%d\n", heures, minutes, secondes);

    // Exercice n°7
    printf("\n** Exercice n°7 **\n******************\n");

    int x, y;
    printf("valeur de x: ");
    scanf("%d", &x);
    printf("valeur de y: ");
    scanf("%d", &y);
    x = y;
    y = x;
    printf("x = %d et y = %d\n", x, y);

    printf("valeur de x: ");
    scanf("%d", &x);
    printf("valeur de y: ");
    scanf("%d", &y);
    int temp = x;
    x = y;
    y = temp;
    printf("x = %d et y = %d\n", x, y);

    return 0;
}