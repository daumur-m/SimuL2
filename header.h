#ifndef HEADER_H
#define HEADER_H

/*  -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   */
/*                                                              */
/*  Fichier header regroupant les déclarations de fonctions,    */ 
/*  bibliothèques et constantes.                                */
/*                                                              */
/*  -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*  Déclarations des fonctions et des constantes de Mastumoto   */

#define     N 624
#define     M 397
#define     MATRIX_A   0x9908b0dfUL 
#define     UPPER_MASK 0x80000000UL 
#define     LOWER_MASK 0x7fffffffUL 

static unsigned long   mt[N];
static int             mti = N + 1; 

void            init_genrand  ( unsigned long s );
void            init_by_array ( unsigned long init_key[], int key_length );
unsigned long   genrand_int32 ( void );
long            genrand_int31 ( void );
double          genrand_real1 ( void );
double          genrand_real2 ( void );
double          genrand_real3 ( void );
double          genrand_res53 ( void );

/*  Déclarations de mes fonctions et de mes constantes          */

#define     NBPOINT 1000000
#define     NBITER  100
#define     CONST   1.980

double      fctPi    ( int nbIté );
double *    fctPiMoy ( int nbPoint, int nbIter, double* résultat );

#endif