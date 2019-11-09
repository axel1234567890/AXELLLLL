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
}
