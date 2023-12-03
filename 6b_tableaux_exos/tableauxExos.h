/* Estelle DORIOT              */
/*  Exercices sur les tableaux */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// Exercice n°1
void afficher_tableau(int tab[], int nb);
void notes_hasard(int tab[], int nb);
void ex1();

// Exercice n°2
int somme(int tab[], int n);
int appartient(int valeur, int tab[], int n);
int indice(int valeur, int tab[], int n);
int nb_occurrences(int valeur, int tab[], int n);
int croissant(int tab[], int n);
int maximum(int tab[], int n);
int minimum(int tab[], int n);
int indice_max(int tab[], int n);
int indice_min(int tab[], int n);
int derniere_occurrence(int valeur, int tab[], int n);
void ex2();

// Exercice n°3
double moyenne_simple(int notes[], int n);
double moyenne_ponderee(int notes[], double coeffs[], int n);
void ex3();

// Exercice n°4
void carres(int tab[], int res[], int n);
void ex4();

// Exercice n°5
bool symetrique(int tab[], int n);
void echange(int tab[], int i, int j);
void miroir(int tab[], int n);
void ex5();

// Exercice n°6
void inserer(int tab[], int el, int idx, int *taille);
void insert_sorted(int tab[], int el, int *taille);
void ex6();

// Exercice n°7
int denivele_positif(int tab[], int taille);
void ex7();

// Exercice n°8
void somme_tab(int tab1[], int tab2[], int res[], int taille);
void multiplier(int k, int tab[], int taille);
bool tous_positifs(int tab[], int taille);
bool un_positif(int tab[], int taille);
void ex8();

// Exercice n°9
int nb_batiments_eclaires(int tab[], int taille);
void ex9();

// Exercice n°10
int indice_arret(int tab[], int taille);
void ex10();

// Exercice n°11
bool doublons(int tab[], int taille);
void suppr_doublons(int tab[], int taille, int res[], int *nb);
void concatene(int tab1[], int taille1, int tab2[], int taille2, int res[], int *taille);
void ex11();

// Exercice n°12
void fibonacci(int n, int tab[]);
void ex12();

// Exercice n°13
void nombres_premiers(int n, int premiers[]);
void ex13();