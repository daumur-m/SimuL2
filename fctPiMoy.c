#include "header.h"

/*  -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   */
/*                                                              */
/*  Fonction fctPiMoy:                                          */
/*      Fonction de calcul d'approximation de Pi utilisant      */
/*      notre fonction précédente sur plusieurs itérations      */
/*      et calculant la moyenne.                                */
/*      De plus, la fonction intègre un calcul de variance      */
/*      et d'un rayon de confiance permettant un intervalle     */
/*      "sûr" contenant Pi.                                     */
/*                                                              */
/*  Entrée :    1/ prend le nombre de points aléatoires tirés   */
/*      pour le calcul d'approximation de Pi en paramètre.      */
/*              2/ prend le nombre d'itération du calcul de     */
/*      Pi par la fonction précédente, afin de calculer une     */
/*      moyenne.                                                */
/*              3/ prend un tableau de résultats comprennant :  */
/*      - case 0 : la valeur de Pi obtenue par moyenne          */
/*      - case 1 : la variance                                  */
/*      - case 2 : le rayon de confiance calculé                */
/*                                                              */
/*  Sortie : la fonction retournera alors le tableau des        */
/*      résultats une fois rempli par la fonction               */
/*                                                              */
/*  Fonctionnement :                                            */
/*      - on va calculer Pi grâce à la fonction précédente      */
/*        un nombre "nbIté" de fois. Chaque valeur de Pi sera   */
/*        stockée dans un tableau "resultsPi" pour le calcul du */
/*        rayon de confiance. On va additionner chaque valeur   */
/*        de Pi obtenue dans une variable nommée "totalPi" que  */
/*        l'on divisera par le nombre d'itération afin          */
/*        d'obtenir la moyenne.                                 */
/*      - on va calculer la variance à l'aide de la formule     */
/*        fournie dans le sujet.                                */
/*      - pour obtenir le rayon de confiance, on multipliera    */
/*        l'écart-type ( racine carré de la variance ) divisé   */
/*        par le nombre d'itérations tirés, par une constante   */
/*        fournie par le tableau du sujet.                      */
/*        Cette constante étant corrolée avec le nombre         */
/*        d'itération, nous avons decidé à des fins pratiques   */
/*        de la définir comme "CONST" dans le fichier header.h  */
/*        On pourra ainsi la changer aisément.                  */
/*      - on va conclure en remplissant le tableau des          */
/*        résultats avec les valeurs obtenues et pouvoir le     */
/*        renvoyer en sortie de fonction.                       */
/*                                                              */
/*  -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   */

double * fctPiMoy ( int nbPoint, int nbIté, double résultat[] )
{   
    /*  Créations / Déclarations de mes variables
            - pour le calcul de Pi moyen                        
            - pour le calcul du rayon de confiance              */

    double  totalPi   = 0.;
    double* resultsPi = NULL;
    resultsPi = calloc ( nbIté, sizeof(double*) );

    double  variance  = 0.;
    double  rayonConf = 0.;

    /*  Calcul de la moyenne de Pi pour "nbIté" itérations en   
        utilisant la fonction "fctPi" définie précédemment      */

    for (int i=0 ; i<nbIté ; i++) 
    {  
        double pi = fctPi ( nbPoint );
        resultsPi[i] = pi;
        totalPi += pi;   
    }

    /*  Calcul du rayon de confiance en passant par un calcul   
        de la variance                                          */

    for (int i=0 ; i<nbIté ; i++) 
    {
        variance += pow ( resultsPi[i] - ( totalPi / nbIté ), 2 );
    }
    variance  = variance / ( nbIté - 1 );
    rayonConf = CONST * sqrt ( variance / nbIté );

    /*  Remplissage du tableau de résultats                     */

    résultat[0] = totalPi / nbIté;  // case 0 - résultat de pi obtenu par moyenne
    résultat[1] = variance;         // case 1 - variance ( optionnel )
    résultat[2] = rayonConf;        // case 2 - rayon de confiance

    /*  Libération de la mémoire                                */

    free ( resultsPi );

    return résultat;
}