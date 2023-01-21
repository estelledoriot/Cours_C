/* Estelle DORIOT           */
/*  Cours sur les tableaux */

#include <stdio.h> 

int maximum(int tab[], int N)
{
    int maxi = tab[0];
    for (int i=0; i<N; i++)
        if (tab[i] > maxi)
            maxi = tab[i];
    return maxi;
}

int main()
{
    int tab[7] = {15, 7, 20, 3, 10, 11, 16};
    tab[3] = 19;

    for (int i = 0; i < 7; i++)
        printf("%d ", tab[i]);
    printf("\n");

    int maxi = maximum(tab, 7);
    printf("Le maximum de tab est: %d\n", maxi);
    return 0;
}