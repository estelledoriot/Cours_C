/* Estelle DORIOT                        */
/*  Cours sur la programmation modulaire */

#include <stdio.h>
#include <stdlib.h>

double aireRectangle(double largeur, double hauteur); //prototype

int main()
{
    printf("Rectangle de largeur 5 et de hauteur 10. Aire = %f\n", aireRectangle(5, 10));
    printf("Rectangle de largeur 2.5 et de hauteur 3.5. Aire = %f\n", aireRectangle(2.5, 3.5));
    return 0;
}

double aireRectangle(double largeur, double hauteur) // définition de la fonction
{
    return largeur * hauteur;
}