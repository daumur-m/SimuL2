#include "header.h"

/*  -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   */
/*                                                              */
/*  Fonction main:                                              */
/*  Initialisation du générateur de Matsumoto.                  */
/*                                                              */
/*  Utilisation d'une constante -- NBPOINT -- voir header.h     */
/*      Correspondant au nombre de points aléatoires utilisés   */
/*      pour obtenir une approximation de Pi.                   */
/*                                                              */
/*  Utilisation d'une constante -- NBITER -- voir header.h      */
/*      Correspondant au nombre de répétitions du calcul        */
/*      d'approximation de Pi, ici utilisé pour faire une       */
/*      moyenne -> pour la fonction fctPiMoy.                   */
/*                                                              */
/*  Utilisation d'une variable -- nbExp --                      */
/*      Correspondant au nombre d'utilisation de la fonction    */
/*      fctPiMoy afin d'utiliser de nouveaux                    */
/*      tirages de nombres aléatoires.                          */
/*                                                              */
/*  Utilisation d'un tableau de double float -- résultat --     */
/*      Correspondant au retour de notre fonction fctPiMoy      */
/*      cf. documentation de ladite fonction pour connaître     */
/*      le retour proposé.                                      */
/*                                                              */
/*  -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   */

int main ()
{   
    /*  Initialisation des générateurs de Mastumoto             */

    unsigned long init[4] = {0x123, 0x234, 0x345, 0x456}, length = 4;
    init_by_array (init, length);

    /*  Créations / Déclarations de mes variables               */

    int    nbExp = 5;
    double résultat[3] = {0};

    /*  Boucle d'utilisation de la fonction fctPiMoy            
        + affichages des résultats                              */

    printf ("Moyenne sur %d itérations de %d lancers.\n\n", NBITER, NBPOINT);
    for (int i=0 ; i<nbExp ; i++)
    {
        printf  ("  Tirage %d: \n", i+1);
        fctPiMoy( NBPOINT, NBITER, résultat );
        printf  ("\tRésultat de Pi :\t%2.6lf \n", résultat[0]);
        printf  ("\tRayon de confiance :\t%2.6lf - %2.6lf \n\n", résultat[0] - résultat[2], résultat[0] + résultat[2]);
    }
    return 0;
}