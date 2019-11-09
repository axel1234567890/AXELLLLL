#ifndef __ZAL_H__
#define __ZAL_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define LARGEUR_RUE 30
#define LARGEUR_RIVE 31
#define LONGUEUR_RUE 74
#define TAILLENOM 20
#define NBZOMBIS 20


/**
 * Cette procédure affiche une ligne de la rive gauche de la rue Jean Savidan
 * @param int Le numéro de la ligne à afficher */
void afficherRiveGauche(int);

/**
 * Cette procédure affiche une ligne de la rive gauche de la rue Jean Savidan
 * @param int Le numéro de la ligne à afficher 
*/
void afficherRiveDroite(int);

/**
 * Affiche la totalité de la rue Jean Savidan vide
*/
void afficherRueSavidanVide();


 typedef struct heros {
    unsigned int posx;
    unsigned int posy;
    unsigned char name;
};

 typedef struct zombi {
    unsigned int zposx;
    unsigned int zposy;
    unsigned char zname;
};

#endif
