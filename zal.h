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
}Heros;

typedef struct zombi {
    unsigned int zposx;
    unsigned int zposy;
    unsigned char zname;
}Zombi;
	

typedef struct tabzombi{
	int tab[NBZOMBIS];
	struct zombi;
};

struct zombi initialiserZombi();

struct heros initialiserHeros();
	

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

void afficherPosH(struct heros);
void afficherPosZ1(struct zombi);
void afficherPosZ2(struct zombi);
void afficherPosZ3(struct zombi);
void afficherPosZ4(struct zombi);
void afficherPosZ6(struct zombi);
void afficherPosZ7(struct zombi);
void afficherPosZ8(struct zombi);
void afficherPosZ9(struct zombi);
void afficherPosZ0(struct zombi);

/** 
Fonction qui initialise une nouvelle structure de type héros
. Un héros est par défaut positionné en X à LARGEUR_RUE / 2 et à Y = LONGUEUR_RUE, où LARGEUR_RUE et 
LONGUEUR_RUE sont des constantes symboliques définies dans zal.h.
*@return Heros une structure de type Heros
*/
struct heros initialiserHeros();

/** 
Fonction qui initialise une nouvelle structure de type zombi.Un zombiest par défaut 
positionné en haut de la rue Jean Savidan, posY = 0 et aléatoirement en X
*@return Zombiune structure de type Zombi
*/
struct zombi initialiserZombi();



#endif
