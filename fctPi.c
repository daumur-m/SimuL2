#include "header.h"

/*  -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   */
/*                                                              */
/*  Fonction fctPi:                                             */
/*      Fonction de calcul d'approximation de Pi.               */
/*                                                              */
/*  Entrée : prend le nombre de points aléatoires tirés pour    */
/*      le calcul d'approximationde Pi en paramètre.            */
/*                                                              */
/*  Sortie : la fonction retourne une valeur approximative      */
/*      de Pi proportionnellement précise en fonction du        */
/*      nombre de points utilsé.                                */
/*                                                              */
/*  Fonctionnement :                                            */
/*      - on va générer 2 nombres aléatoires entre 0 et 1, ici  */
/*        en utilisant le gen3 de Makoto Matsumoto.             */
/*      - on va utiliser une variable de compte que l'on        */
/*        incrémentera lorsque le point tombera dans le quart   */
/*        de cercle.                                            */
/*      - on retournera le compte obtenu multiplié par 4        */
/*        car calcul dans un quart de cercle, divisé par notre  */
/*        nombre de points total, afin d'obtenir le ratio.      */
/*                                                              */
/*  -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   */

double fctPi ( int nbPoint )
{
    int count = 0;
    for (int i=0 ; i<nbPoint ; i++) 
    {
        double x = genrand_real3();
        double y = genrand_real3();
        if ( pow (x, 2) + pow (y, 2) < 1 ) count++;
    }
    return (double)count / (double)nbPoint * 4.;
}