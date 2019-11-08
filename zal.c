#include "zal.h"

void afficherRiveGauche(int l){
    char riveGauche[LONGUEUR_RUE][LARGEUR_RIVE] = {"----------------------------||","Rue des Ursulines  !! HELP!!||","----------------------------||","        .    	 .          ||","        ..........          ||","        .    	 .          ||","        .    	 .          ||","        ..........          ||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","----------------------------||","Impasse ancienne gendarmerie||","----------------------------||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","        .........           ||","        .I       .          ||","        . M      .          ||","        .  A	 .          ||","        .   G	 .          ||","        .    E	 .          ||","        .    R	 .          ||","        .   I 	 .          ||","        ...E......          ||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","        ..........          ||","        .    	 .          ||","        .    	 .          ||","----------------------------||","rue compagnie Roger Barbe   ||","----------------------------||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","        ..........          ||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","----------------------------||","----------------------------||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","        ..........          ||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","        ..........          ||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","----------------------------||","Venelle des 3 avocats       ||","----------------------------||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","        ..........          ||","        .    	 .          ||","        .    	 .          ||","        ..........          ||","        .    	 .          ||","        .    	 .          ||","        .    	 .          ||","****************************||"};
      printf("%s",riveGauche[l]);
}
void afficherRiveDroite(int l){
    char riveDroite[LONGUEUR_RUE][LARGEUR_RIVE] ={"||. .","||. .","||..........","||. .","||. .","||. .","||. .","||----------------------------","||Venelle des écoles","||----------------------------","||. .","||. .","||. .","||. .","||..........","||. .","||. .","||. .","||. .","||. .","||. .","||. .","||..........","||. .","||. .","||. .","||----------------------------","||Rue de Keriavily","||----------------------------","||. .","||. .","||. .","||. .","||..........","||. .","||. .","||. .","||. .","||. .","||. .","||----------------------------","||. .","||. .","||. .","||. .","||. .","||..........","||. .","||. .","||. .","||. .","||. .","||----------------------------","||rue Emile le Taillandier","||----------------------------","||. .","||..........","||.M .","||. A .","||. I .","||. R .","||. I .","||......E...","||----------------------------","||place des halles","||----------------------------","||. .","||. .","||. .","||. .","||. .","||. .","||. .","||****************************"};
    printf("%s",riveDroite[l]);
}

void afficherRueSavidanVide(){
    int y,i;
    for(y = 0; y <= LONGUEUR_RUE;y++){
        afficherRiveGauche(y);
        for(i = 0; i < LARGEUR_RUE ;i++){
            printf(" ");
        }   
        afficherRiveDroite(y);
        printf("\n");
    }
/**
Specification:
Nom de la function
: 
aleatoire
Description
:
La fonction aleatoire retourne un entier généré de manière pseudo
-
aléatoire compris entre 0 et la valeur de son paramètre limite (non inclus).
Paramètre 
: int limite 
--
la borne maximale non incluse pour la generation du 
Type de l
a constante retournée
:
int
--
compris entre
0
et
49
inclus
Contrainte
: Necessite l’inclusion des entêtes #include<time.h> et #include<stdlib.h>
Pour initialiser le générateur pseudo
-
aléatoire, il faut ajouter l’instruction 
srand(time(NULL));
au début de 
la function main.
Exemple d’utilisation
: int retA = aleatoire(10);
*/
int aleatoire(int limite){
return rand()%limite;
}

/** 
Fonction qui initialise une nouvelle structure de t
ype héros. Un héros est par défaut 
positionné en X à LARGEUR_RUE / 2 et à Y = LONGUEUR_RUE, où LARGEUR_RUE et 
LONGUEUR_RUE sont des constantes symboliques définies dans zal.h.
*@return Heros une structure de type Heros
*/
heros initialiserHeros(){
	int posx;
	int posy;
	posx = LARGEUR_RUE/2;
	posy = LONGUEUR_RUE;
	}
zombi initialiserzombi(){
	int zposx;
	int zposy;
	posx = ;
	posy = 0;
	}

