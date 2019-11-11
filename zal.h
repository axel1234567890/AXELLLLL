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



typedef struct  
{  
	int posx; 
	int posy; 
	int Vie; 
} Heros ; 

Heros heros;

typedef struct  
{ 
	int zposx; 
	int zposy; 
} Zombi; 

Zombi zombi;

typedef Zombi tabzombis[NBZOMBIS];




/**Specification :
Nom de la fonction : aleatoire
Description : La fonction aleatoire retourne un entier généré de manière pseudo-
aléatoire compris entre 0 et la valeur de son paramètre limite(non inclus).
Paramètre : int limite -- la borne maximale non incluse pour la generation du nombre.
Type de la constante retournée : int -- compris entre 0 et 49 inclus
Contraintes : Necessite l'inclusion des entêtes #include<time.h> et #include<stdlib.h>
Pour initialiser le générateur pseudo-aléatoire, il faut ajouter l'instruction
srand(time(NULL)); au début de la fonction main.
Exemple d'utilisation : int retA = aleatoire(10);
**/

int aleatoire(int limite);



/** Fonction qui initialise une nouvelle structure de type héros. 
 * Un hérosest par défaut positionné en X à LARGEUR_RUE / 2 et à Y = LONGUEUR_RUE, 
 * où LARGEUR_RUE et LONGUEUR_RUE sont des constantes symboliques définies dans zal.h.
*@return Heros une structure de type Heros
*/

Heros initialiserHeros(); 


/** 
Fonction qui initialise une nouvelle structure de type zombi. Un zombi est par défaut positionné 
en haut de la rue Jean Savidan, posY = 0 et aléatoirement en X
*@return Zombi une structure de type Zombi
**/

Zombi initialiserZombi();

/** 
Procédure qui initialise un tableau de zombis passé en paramètre. Ce tableau est de 
type TabZombis et est directement modifié dans la procédure 
*@param TabZombis un tableau de NBZOMBIS structures de type zombi
*/

void initialiserZombis(tabzombis zombis);

/**Specification :
Nom de la fonction : infoHeros
Description: Procédure qui permet de visualiser les informations fournis sur le heros
* elles sont : la position en X et la position Y des Zombis.
Paramètres : Heros.posX ;Heros.posY ;
*/

void infoHeros(Heros heros);


/**Specification :
Nom de la fonction : infoZombiV2
Description: Procédure qui permet de visualiser les informations fournis sur un zombi
* elles sont : la position en X et la position Y des Zombis.
Paramètres : Zombi.posX ; Zombi.posY ;
* ((fonction utilisé dans infoZombiV2))
*/

void infoZombiV2(Zombi zombi);

/**Specification :
Nom de la fonction : infoZombiAll
Description: Procédure qui permet de visualiser les informations fournis sur les zombis
* elles sont : la position en X et la position Y des Zombis.
Paramètres : Zombi.posX ; Zombi.posY ;
*/

void infoZombiAll(tabzombis zombis);

#endif
	
