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


 struct heros {
    unsigned int posx;
    unsigned int posy;
    unsigned char name;
};

typedef struct tabzombi{
	int tab[NBZOMBIS];
	 struct zombi {
    unsigned int zposx;
    unsigned int zposy;
    unsigned char zname;
};
	
/**Specification:Nom de la function: aleatoire
Description:La fonction aleatoire retourne un entier généré de manière pseudo-aléatoire 
compris entre 0 et la valeur de son paramètre limite (non inclus).
Paramètre : int limite --la borne maximale non incluse pour la generation du 
Type de la constante retournée: int--compris entre0et49inclus
Contrainte: Necessite l’inclusion des entêtes #include<time.h> et #include<stdlib.h>
Pour initialiser le générateur pseudo-aléatoire, il faut ajouter l’instruction srand(time(NULL));
au début de la function main.
Exemple d’utilisation: int retA = aleatoire(10);*/
int aleatoire(int limite);

#endif
