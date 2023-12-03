/* Estelle DORIOT               */
/*  Exercices sur les fonctions */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#ifndef H_FONCTIONS_EXOS
#define H_FONCTIONS_EXOS

// Exercice n°1
float imc(float masse, float taille);
void ex1();

// Exercice n°2
float aire_trapeze(float a, float b, float h);
void ex2();

// Exercice n°3
float aire_triangle(float a, float b, float c);
void ex3();

// Exercice n°4
int F(int n);
int G(int n);
void ex4();

// Exercice n°5
float distance_au_carre(float x1, float y1, float x2, float y2);
bool est_rectangle(float xa, float ya, float xb, float yb, float xc, float yc);
void ex5();

// Exercice n°6
void ligne(int n, int m);
void carre(int m);
void ex6();

// Exercice n°7
float moyenneDe(int n);
int premier6();
void ex7();

// Exercice n°8
bool est_premier(int n);
void ex8();

// Exercice n°9
int s1(int n);
int s3(int n);
void ex9();

// Exercice n°10
long factorielle(int n);
int catalan(int n);
void ex10();

// Exercice n°11
int PGCD(int a, int b);
int PPCM(int a, int b);
void ex11();

#endif