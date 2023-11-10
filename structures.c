/* Estelle DORIOT            */
/*  Cours sur les structures */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct MaStructure
{
    int variable1;
    int variable2;
    double truc;
};

typedef struct
{
    double x;
    double y;
} Point;

struct element
{
    float x;
    float y;
    struct element *suivant;
};

union Nombre
{
    int i;
    float f;
};

typedef enum
{
    LUNDI = 1,
    MARDI = 2,
    MERCREDI = 3,
    JEUDI = 4,
    VENDREDI = 5,
    SAMEDI = 6,
    DIMANCHE = 7
} Jour;

Point initialiser()
{
    double x, y;
    printf("Coordonnée x: ");
    scanf("%lf", &x);
    printf("Coordonnée y: ");
    scanf("%lf", &y);
    Point p;
    p.x = x;
    p.y = y;
    return p;
}

void affiche(Point p)
{
    printf("Point(x=%f,y=%f)\n", p.x, p.y);
}

void origine(Point *p)
{
    p->x = 0.0;
    p->y = 0.0;
}

void activite(Jour jour)
{
    if (jour == LUNDI)
    {
        prinft("Il y a tennis\n");
    }
    else if (jour == MARDI)
    {
        printf("Il y a piscine\n");
    }
}

int main()
{
    typedef int entier;
    entier a = 3;
    typedef int vecteur[3];
    vecteur v, w;
    typedef int *ptr_int;
    ptr_int p;

    Point p1;
    p1.x = 10.0;
    p1.y = 20.0;
    Point p2 = {0.0, 0.0};

    Point pt = initialiser();
    affiche(pt);
    origine(&pt);
    affiche(pt);

    union Nombre nb;
    nb.i = 10;
    printf("%d\n", nb.i);
    nb.f = 20.0;
    printf("%d\n", nb.i);

    Jour courant = MERCREDI;
    Jour debut = LUNDI;
}
